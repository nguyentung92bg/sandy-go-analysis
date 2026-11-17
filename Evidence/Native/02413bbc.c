/* IL2CPP: Dino.BusSand.App.UI.WinPanel$$Continue
void Dino_BusSand_App_UI_WinPanel__Continue (Dino_BusSand_App_UI_WinPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.WinPanel$$Continue
   void Dino_BusSand_App_UI_WinPanel__Continue (Dino_BusSand_App_UI_WinPanel_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_WinPanel__Continue_2313bbc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c559 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabb00);
    FUN_02132f7c(PTR_DAT_04cb8378);
    bRam0000000004f9c559 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  puVar1 = PTR_DAT_04caba50;
  if (((uVar9 & 1) != 0) || (*(char *)(param_1 + 0x2c) != '\0')) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88f == '\0') {
    FUN_02132f7c(PTR_DAT_04caba50);
    cRam0000000004f9b88f = '\x01';
  }
  lVar10 = *(long *)puVar1;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar10 = *(long *)puVar1;
  }
  if (**(long **)(lVar10 + 0xb8) != 0) {
    uVar9 = Dino_BusSand_App_UI_PostWinFlow__Pending_2313d84
                      (*(undefined4 *)(**(long **)(lVar10 + 0xb8) + 0x44));
    if ((uVar9 & 1) == 0) {
      uVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
      System_Action___ctor_47b5ed0(uVar8,param_1,*(undefined8 *)PTR_DAT_04cb8378,0);
      if (*(int *)(*(long *)PTR_DAT_04cabb00 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uStack_38 = 0;
      uStack_30 = 0;
      Dino_BusSand_App_UI_ScreenFade__Run_2289914(uVar8,&uStack_38,0);
      return;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88f == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    lVar10 = *(long *)puVar1;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar10 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_04cac6b8;
    lVar10 = **(long **)(lVar10 + 0xb8);
    if (lVar10 != 0) {
      if ((bRam0000000004f9b868 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04caa458,0);
        FUN_02132f7c(PTR_DAT_04cac440);
        FUN_02132f7c(PTR_DAT_04cac458);
        FUN_02132f7c(PTR_DAT_04cac6c0);
        FUN_02132f7c(PTR_DAT_04cabaf8);
        FUN_02132f7c(PTR_DAT_04cac6c8);
        FUN_02132f7c(PTR_DAT_04cac6b8);
        FUN_02132f7c(PTR_DAT_04cac6d0);
        bRam0000000004f9b868 = 1;
      }
      lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
      Dino_BusSand_App_GameApp___c__DisplayClass102_0___ctor_216a818(lVar6,0);
      if (lVar6 != 0) {
        *(long *)(lVar6 + 0x10) = lVar10;
        thunk_FUN_02134474((long *)(lVar6 + 0x10),lVar10);
        puVar2 = PTR_DAT_04cac440;
        puVar1 = PTR_DAT_04cabaf8;
        if (*(long *)(lVar10 + 0x28) != 0) {
          Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
                    (*(long *)(lVar10 + 0x28),*(undefined8 *)PTR_DAT_04cac6d0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar5 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar2);
          }
          puVar2 = PTR_DAT_04cac6c8;
          puVar1 = PTR_DAT_04caa458;
          uVar9 = Dino_BusSand_App_Meta_Economy__GoNextLevelDirectly_220486c(uVar5,0);
          if (((uVar9 & 1) == 0) ||
             (uVar9 = Dino_BusSand_App_Meta_WinStreak__get_WantsHome_2295078(0), (uVar9 & 1) != 0))
          {
            puVar3 = PTR_DAT_04cac6c0;
            lVar7 = *(long *)PTR_DAT_04cac6c0;
            if (*(int *)(lVar7 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar7 = *(long *)puVar3;
            }
            puVar3 = PTR_DAT_04cac458;
            bVar4 = false;
            if (**(char **)(lVar7 + 0xb8) != '\0') {
              lVar7 = *(long *)PTR_DAT_04cac458;
              if (*(int *)(lVar7 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar7 = *(long *)puVar3;
              }
              bVar4 = *(char *)(*(long *)(lVar7 + 0xb8) + 5) == '\0';
            }
          }
          else {
            bVar4 = false;
          }
          uVar8 = *(undefined8 *)puVar1;
          uVar11 = *(undefined8 *)(lVar10 + 0x28);
          *(bool *)(lVar6 + 0x18) = bVar4;
          uVar8 = thunk_FUN_0216e89c(uVar8);
          System_Action___ctor_47b5ed0(uVar8,lVar6,*(undefined8 *)puVar2,0);
          lVar6 = Dino_BusSand_App_UI_PostWinFlow__Run_231fbb4(uVar11,uVar8,0);
          if (lVar6 == 0) {
            thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
            uVar11 = thunk_FUN_0216e89c();
            uVar8 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
            System_NullReferenceException___ctor_483267c(uVar11,uVar8,0);
          }
          else {
            uVar9 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
            if ((uVar9 & 1) != 0) {
              if ((bRam0000000004fa84ef & 1) == 0) {
                FUN_02132f7c(PTR_DAT_04cf7890);
                bRam0000000004fa84ef = 1;
              }
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              lVar7 = *(long *)(lVar10 + 0x10);
              if (lVar7 != 0) {
                if (pcRam0000000004fa8560 == (code *)0x0) {
                  pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
                }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*pcRam0000000004fa8560)(lVar7,lVar6);
                return;
              }
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar10,0);
            }
            thunk_FUN_021985a8(PTR_DAT_04caa3a8);
            uVar11 = thunk_FUN_0216e89c();
            uVar8 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
            System_ArgumentException___ctor_47b660c(uVar11,uVar8,0);
          }
          uVar8 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
          FUN_021330e8(uVar11,uVar8);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

