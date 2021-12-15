SELECT candidate.name, round(((score.math * 2) + (specific * 3) + (project_plan * 5)) / 10, 2) as avg
FROM candidate, score
WHERE Candidate.id = Score.candidate_id