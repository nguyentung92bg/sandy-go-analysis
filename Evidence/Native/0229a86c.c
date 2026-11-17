/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleStartPanel$$OnMaskClick
void Dino_BusSand_App_UI_BattleRoyaleStartPanel__OnMaskClick (Dino_BusSand_App_UI_BattleRoyaleStartPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleStartPanel$$OnMaskClick
   void Dino_BusSand_App_UI_BattleRoyaleStartPanel__OnMaskClick
   (Dino_BusSand_App_UI_BattleRoyaleStartPanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_BattleRoyaleStartPanel__OnMaskClick_219a86c(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
                    /* try { // try from 0229a874 to 0239a87b has its CatchHandler @ 0229a8c8 */
                    /* try { // try from 0229a87c to 0239a8db has its CatchHandler @ 0229a828 */
  if (*(long *)(param_1 + 0x38) == 0) {
    lVar3 = 0;
  }
  else {
    plVar1 = (long *)(*(long *)(param_1 + 0x38) + 0x18);
    lVar3 = *plVar1;
    *plVar1 = 0;
    thunk_FUN_02134474(plVar1,0);
  }
  if (*(char *)(param_1 + 0x48) != '\0') {
    lVar2 = *(long *)(param_1 + 0x50);
    *(undefined1 *)(param_1 + 0x48) = 0;
    if (lVar2 != 0) {
      UnityEngine_MonoBehaviour__StopCoroutine_43c3f10(param_1,lVar2,0);
      *(undefined8 *)(param_1 + 0x50) = 0;
                    /* catch() { ... } // from try @ 0229a874 with catch @ 0229a8c8 */
      thunk_FUN_02134474((long *)(param_1 + 0x50),0);
    }
    if (*(long *)(param_1 + 0x40) != 0) {
      Dino_BusSand_App_Meta_BattleRoyaleCore__StartNewRound_2222184(*(long *)(param_1 + 0x40),0);
    }
    Dino_BusSand_App_UI_BattleRoyaleHallButton__RefreshIfPresent_218b8b0(0);
  }
                    /* try { // try from 0229a8e8 to 0239a8eb has its CatchHandler @ 0229a8f4 */
  Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
  if (lVar3 != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0229a8e8 with catch @ 0229a8f4
                        */
                    /* try { // try from 0229a8f8 to 0239a927 has its CatchHandler @ 0229a8f8
                       catch() { ... } // from try @ 0229a8f8 with catch @ 0229a8f8
                       catch() { ... } // from try @ 0229a934 with catch @ 0229a8f8 */
                    /* WARNING: Could not recover jumptable at 0x0229a908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
    return;
  }
  return;
}

