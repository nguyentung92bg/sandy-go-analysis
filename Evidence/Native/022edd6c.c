/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel$$StopBounceLoop
void Dino_BusSand_App_UI_YachtRacingPanel__StopBounceLoop (Dino_BusSand_App_UI_YachtRacingPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel$$StopBounceLoop
   void Dino_BusSand_App_UI_YachtRacingPanel__StopBounceLoop
   (Dino_BusSand_App_UI_YachtRacingPanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingPanel__StopBounceLoop_21edd6c(long param_1)

{
  long *plVar1;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022edd18 with catch @ 022edd6c
                        */
                    /* try { // try from 022edd70 to 023edd73 has its CatchHandler @ 022eddd8 */
                    /* try { // try from 022edd74 to 023edddb has its CatchHandler @ 022eda4c */
  plVar1 = (long *)(param_1 + 0x98);
  if (*plVar1 != 0) {
    UnityEngine_MonoBehaviour__StopCoroutine_43c3f10(param_1,*plVar1,0);
  }
  *plVar1 = 0;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)plVar1 >> 0xc & 0x3f),
                 ((ulong)plVar1 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

