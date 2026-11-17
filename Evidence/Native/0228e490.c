/* IL2CPP: Dino.BusSand.App.UI.BattleRoyalePanel$$OnClose
void Dino_BusSand_App_UI_BattleRoyalePanel__OnClose (Dino_BusSand_App_UI_BattleRoyalePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyalePanel$$OnClose
   void Dino_BusSand_App_UI_BattleRoyalePanel__OnClose (Dino_BusSand_App_UI_BattleRoyalePanel_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_BattleRoyalePanel__OnClose_218e490(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x50);
  if (*plVar1 != 0) {
    UnityEngine_MonoBehaviour__StopCoroutine_43c3f10(param_1,*plVar1,0);
    *(undefined8 *)(param_1 + 0x50) = 0;
    if (iRam00000000051c1b10 != 0) {
      FUN_02220bf0(1L << ((ulong)plVar1 >> 0xc & 0x3f),
                   ((ulong)plVar1 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
    }
    return;
  }
  return;
}

