/* IL2CPP: Dino.BusSand.App.SimulatedAds$$Shown
void Dino_BusSand_App_SimulatedAds__Shown (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.SimulatedAds$$Shown
   void Dino_BusSand_App_SimulatedAds__Shown (const MethodInfo* method); */

void Dino_BusSand_App_SimulatedAds__Shown_21756d4(void)

{
  undefined *puVar1;
  long lVar2;
  float fVar3;
  
  puVar1 = PTR_DAT_04cacf40;
                    /* try { // try from 022756e8 to 023756ef has its CatchHandler @ 02275700 */
  if ((bRam0000000004f9b8d2 & 1) == 0) {
                    /* try { // try from 022756f0 to 0237571b has its CatchHandler @ 022756c4 */
    FUN_02132f7c(PTR_DAT_04cacf40);
                    /* catch() { ... } // from try @ 022756e8 with catch @ 02275700 */
    bRam0000000004f9b8d2 = 1;
  }
  lVar2 = *(long *)(*(long *)puVar1 + 0xb8);
  if (*(float *)(lVar2 + 4) <= 0.0) {
    fVar3 = 0.0;
  }
  else {
                    /* try { // try from 0227571c to 0237573f has its CatchHandler @ 0227571c
                       catch() { ... } // from try @ 0227571c with catch @ 0227571c
                       catch() { ... } // from try @ 02275748 with catch @ 0227571c */
    fVar3 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
    lVar2 = *(long *)(*(long *)puVar1 + 0xb8);
    fVar3 = fVar3 + *(float *)(lVar2 + 4);
  }
  *(float *)(lVar2 + 8) = fVar3;
                    /* try { // try from 02275740 to 02375747 has its CatchHandler @ 0227576c */
  return;
}

