# Replace "Super" to "Great"
p 'Super panda'.gsub(/Super/, 'Great')
p 'Super panda'.gsub('Super', 'Great')

# Replace multiple "Super" to "Great"
p 'Super Super panda'.gsub(/Super/, 'Great')
