/* IL2CPP: Dino.BusSand.App.GameApp$$RunPostWin
void Dino_BusSand_App_GameApp__RunPostWin (Dino_BusSand_App_GameApp_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp$$RunPostWin
   void Dino_BusSand_App_GameApp__RunPostWin (Dino_BusSand_App_GameApp_o* __this, const MethodInfo*
   method); */

void Dino_BusSand_App_GameApp__RunPostWin_21675f8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar1 = PTR_DAT_04cac6b8;
                    /* catch() { ... } // from try @ 022675b8 with catch @ 022675fc */
                    /* catch() { ... } // from try @ 02267540 with catch @ 02267600 */
                    /* try { // try from 02267614 to 02367647 has its CatchHandler @ 02267614
                       catch() { ... } // from try @ 02267614 with catch @ 02267614
                       catch() { ... } // from try @ 02267714 with catch @ 02267614 */
  if ((bRam0000000004f9b868 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cac440);
    FUN_02132f7c(PTR_DAT_04cac458);
                    /* try { // try from 02267648 to 02367667 has its CatchHandler @ 0226773c */
    FUN_02132f7c(PTR_DAT_04cac6c0);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cac6c8);
    FUN_02132f7c(PTR_DAT_04cac6b8);
    FUN_02132f7c(PTR_DAT_04cac6d0);
                    /* try { // try from 02267680 to 02367713 has its CatchHandler @ 02267738 */
    bRam0000000004f9b868 = 1;
  }
  lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  Dino_BusSand_App_GameApp___c__DisplayClass102_0___ctor_216a818(lVar6,0);
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x10) = param_1;
    thunk_FUN_02134474((long *)(lVar6 + 0x10),param_1);
    puVar2 = PTR_DAT_04cac440;
    puVar1 = PTR_DAT_04cabaf8;
    if (*(long *)(param_1 + 0x28) != 0) {
      Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
                (*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cac6d0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar2);
      }
      puVar2 = PTR_DAT_04cac6c8;
      puVar1 = PTR_DAT_04caa458;
                    /* try { // try from 02267714 to 0236774f has its CatchHandler @ 02267614 */
      uVar7 = Dino_BusSand_App_Meta_Economy__GoNextLevelDirectly_220486c(uVar5,0);
      if (((uVar7 & 1) == 0) ||
         (uVar7 = Dino_BusSand_App_Meta_WinStreak__get_WantsHome_2295078(0), (uVar7 & 1) != 0)) {
        puVar3 = PTR_DAT_04cac6c0;
                    /* catch() { ... } // from try @ 02267680 with catch @ 02267738 */
        lVar8 = *(long *)PTR_DAT_04cac6c0;
                    /* catch() { ... } // from try @ 02267648 with catch @ 0226773c */
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar8 = *(long *)puVar3;
        }
        puVar3 = PTR_DAT_04cac458;
        bVar4 = false;
        if (**(char **)(lVar8 + 0xb8) != '\0') {
          lVar8 = *(long *)PTR_DAT_04cac458;
                    /* catch() { ... } // from try @ 02267788 with catch @ 02267768 */
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar8 = *(long *)puVar3;
          }
          bVar4 = *(char *)(*(long *)(lVar8 + 0xb8) + 5) == '\0';
                    /* try { // try from 02267784 to 02367787 has its CatchHandler @ 02267794 */
        }
      }
      else {
                    /* try { // try from 02267788 to 023677a7 has its CatchHandler @ 02267768 */
        bVar4 = false;
      }
      uVar9 = *(undefined8 *)puVar1;
      uVar10 = *(undefined8 *)(param_1 + 0x28);
                    /* catch() { ... } // from try @ 02267784 with catch @ 02267794 */
      *(bool *)(lVar6 + 0x18) = bVar4;
      uVar9 = thunk_FUN_0216e89c(uVar9);
      System_Action___ctor_47b5ed0(uVar9,lVar6,*(undefined8 *)puVar2,0);
      lVar6 = Dino_BusSand_App_UI_PostWinFlow__Run_231fbb4(uVar10,uVar9,0);
      if (lVar6 == 0) {
        thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
        uVar10 = thunk_FUN_0216e89c();
        uVar9 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
        System_NullReferenceException___ctor_483267c(uVar10,uVar9,0);
      }
      else {
        uVar7 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
        if ((uVar7 & 1) != 0) {
          if ((bRam0000000004fa84ef & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf7890);
            bRam0000000004fa84ef = 1;
          }
          if (param_1 != 0) {
            lVar8 = *(long *)(param_1 + 0x10);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_1,0);
            }
            if (pcRam0000000004fa8560 == (code *)0x0) {
              pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
            }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000004fa8560)(lVar8,lVar6);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        thunk_FUN_021985a8(PTR_DAT_04caa3a8);
        uVar10 = thunk_FUN_0216e89c();
        uVar9 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
        System_ArgumentException___ctor_47b660c(uVar10,uVar9,0);
      }
      uVar9 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar10,uVar9);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

