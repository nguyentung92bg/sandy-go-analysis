/* IL2CPP: Dino.BusSand.AudioHub$$Duck
void Dino_BusSand_AudioHub__Duck (Dino_BusSand_AudioHub_o* __this, float level, float seconds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.AudioHub$$Duck
   void Dino_BusSand_AudioHub__Duck (Dino_BusSand_AudioHub_o* __this, float level, float seconds,
   const MethodInfo* method); */

void Dino_BusSand_AudioHub__Duck_23761a8(float param_1,float param_2,long param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
                    /* try { // try from 024761b8 to 025761c3 has its CatchHandler @ 02476684 */
  fVar3 = 1.0;
  if (param_1 <= 1.0) {
    fVar3 = param_1;
  }
  fVar2 = 0.0;
  if (0.0 <= param_1) {
    fVar2 = fVar3;
  }
  fVar3 = *(float *)(param_3 + 0xb4);
  fVar1 = *(float *)(param_3 + 0xb0);
                    /* try { // try from 024761d8 to 025761db has its CatchHandler @ 02476554 */
  if (fVar2 <= *(float *)(param_3 + 0xb0)) {
    fVar1 = fVar2;
  }
  *(float *)(param_3 + 0xb0) = fVar1;
  fVar2 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
  if (fVar3 <= fVar2 + param_2) {
    fVar3 = fVar2 + param_2;
  }
  *(float *)(param_3 + 0xb4) = fVar3;
                    /* try { // try from 024761f8 to 025761fb has its CatchHandler @ 02476584 */
  return;
}

