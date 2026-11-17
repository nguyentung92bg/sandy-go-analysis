/* IL2CPP: Dino.BusSand.App.UI.WinStreakPanel.<>c__DisplayClass44_0$$<RefreshStop>b__0
void Dino_BusSand_App_UI_WinStreakPanel___c__DisplayClass44_0___RefreshStop_b__0 (Dino_BusSand_App_UI_WinStreakPanel___c__DisplayClass44_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.WinStreakPanel.<>c__DisplayClass44_0$$<RefreshStop>b__0
   void Dino_BusSand_App_UI_WinStreakPanel___c__DisplayClass44_0___RefreshStop_b__0
   (Dino_BusSand_App_UI_WinStreakPanel___c__DisplayClass44_0_o* __this, const MethodInfo* method);
    */

void Dino_BusSand_App_UI_WinStreakPanel___c__DisplayClass44_0___RefreshStop_b__0_233a188
               (long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar5 = *(long *)(param_1 + 0x18);
  if (*(char *)(lVar6 + 0xb4) == '\0') {
    if (lVar5 == 0) {
LAB_02439238:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar1 = Dino_BusSand_App_Meta_WinStreak__Claimed_2294568(*(undefined8 *)(lVar5 + 0x10),0);
    if ((uVar1 & 1) == 0) {
      lVar2 = Dino_BusSand_App_Meta_WinStreak__get_S_22934d0(0);
      if ((lVar2 == 0) || (*(long *)(lVar5 + 0x10) == 0)) goto LAB_02439238;
      if (*(int *)(*(long *)(lVar5 + 0x10) + 0x14) <= *(int *)(lVar2 + 0x18)) {
        Dino_BusSand_App_UI_WinStreakPanel__HideTooltip_233923c(lVar6);
        lVar5 = Dino_BusSand_App_UI_WinStreakPanel__OpenChest_2339c24(lVar6,lVar5);
        if (lVar5 == 0) {
          thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
          uVar3 = thunk_FUN_0216e89c();
          uVar4 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
          System_NullReferenceException___ctor_483267c(uVar3,uVar4,0);
        }
        else {
          uVar1 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
          if ((uVar1 & 1) != 0) {
            if ((bRam0000000004fa84ef & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04cf7890);
              bRam0000000004fa84ef = 1;
            }
            if (lVar6 != 0) {
              lVar2 = *(long *)(lVar6 + 0x10);
              if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar6,0);
              }
              if (pcRam0000000004fa8560 == (code *)0x0) {
                pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
              }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam0000000004fa8560)(lVar2,lVar5);
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          thunk_FUN_021985a8(PTR_DAT_04caa3a8);
          uVar3 = thunk_FUN_0216e89c();
          uVar4 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
          System_ArgumentException___ctor_47b660c(uVar3,uVar4,0);
        }
        uVar4 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar3,uVar4);
      }
    }
  }
  return;
}

