/* IL2CPP: Dino.BusSand.App.UI.HallScene$$StopSequence
void Dino_BusSand_App_UI_HallScene__StopSequence (Dino_BusSand_App_UI_HallScene_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HallScene$$StopSequence
   void Dino_BusSand_App_UI_HallScene__StopSequence (Dino_BusSand_App_UI_HallScene_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_HallScene__StopSequence_22d1224(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x70);
  if (*plVar1 != 0) {
                    /* try { // try from 023d1234 to 024d1237 has its CatchHandler @ 023d1428 */
                    /* try { // try from 023d1238 to 024d1257 has its CatchHandler @ 023d1434 */
    UnityEngine_MonoBehaviour__StopCoroutine_43c3f10(param_1,*plVar1,0);
  }
  *plVar1 = 0;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)plVar1 >> 0xc & 0x3f),
                 ((ulong)plVar1 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

