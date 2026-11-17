/* IL2CPP: Dino.BusSand.App.UI.WinPanel$$OnClaim
void Dino_BusSand_App_UI_WinPanel__OnClaim (Dino_BusSand_App_UI_WinPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.WinPanel$$OnClaim
   void Dino_BusSand_App_UI_WinPanel__OnClaim (Dino_BusSand_App_UI_WinPanel_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_WinPanel__OnClaim_2313680
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((*(char *)(param_4 + 0x38) != '\0') || (*(char *)(param_4 + 0x39) != '\0')) {
    return;
  }
  *(undefined1 *)(param_4 + 0x90) = 0;
  *(undefined1 *)(param_4 + 0x39) = 1;
  Dino_BusSand_App_UI_WinPanel__SpendButtons_23136c4(param_4);
  puVar3 = PTR_DAT_04ca9ae8;
  iVar1 = *(int *)(param_4 + 0x60);
  if ((bRam0000000004f9c558 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cae910);
    FUN_02132f7c(PTR_DAT_04cae058);
    FUN_02132f7c(PTR_DAT_04caca50);
    FUN_02132f7c(PTR_DAT_04caca60);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    FUN_02132f7c(PTR_DAT_04cb8370);
    bRam0000000004f9c558 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar10 = UnityEngine_Object__op_Equality_43c6f30(param_4,0,0);
  if (((uVar10 & 1) == 0) && (*(char *)(param_4 + 0x2c) == '\0')) {
    plVar13 = (long *)(param_4 + 0x58);
    if (*plVar13 != 0) {
      Dino_BusSand_App_Tween__Kill_2160f04(*plVar13,1,0);
      *plVar13 = 0;
      thunk_FUN_02134474(plVar13,0);
    }
    if (0 < iVar1) {
      uVar14 = *(undefined8 *)(param_4 + 0x48);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar10 = UnityEngine_Object__op_Equality_43c6f30(uVar14,0,0);
      if ((uVar10 & 1) == 0) {
        uVar14 = *(undefined8 *)(param_4 + 0x48);
        if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar7 = _UNK_00e20aec;
        Dino_BusSand_App_UI_UiMotion__Punch_2283d78(_UNK_00e207d8,_UNK_00e20aec,uVar14,0,0,0);
        lVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca60);
        System_Collections_Generic_List_KeyValuePair_int__long_____ctor_3964fac
                  (lVar11,*(undefined8 *)PTR_DAT_04caca50);
        uStack_50 = 0;
        uStack_48 = 0;
        System_Collections_Generic_KeyValuePair_int__long____ctor_390da2c
                  (&uStack_50,0x3e9,iVar1,*(undefined8 *)PTR_DAT_04cae910);
        if (lVar11 != 0) {
          lVar8 = *(long *)(lVar11 + 0x10);
          lVar9 = *(long *)PTR_DAT_04cae058;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar8 != 0) {
            uVar2 = *(uint *)(lVar11 + 0x18);
            if (uVar2 < *(uint *)(lVar8 + 0x18)) {
              lVar8 = lVar8 + (long)(int)uVar2 * 0x10;
              *(uint *)(lVar11 + 0x18) = uVar2 + 1;
              *(undefined8 *)(lVar8 + 0x20) = uStack_50;
              *(undefined8 *)(lVar8 + 0x28) = uStack_48;
            }
            else {
              System_Collections_Generic_List_KeyValuePair_int__long____AddWithResize_3965844
                        (lVar11,uStack_50,uStack_48,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            }
            if (*(long *)(param_4 + 0x48) != 0) {
              uVar15 = UnityEngine_Transform__get_position_43d0e48(*(long *)(param_4 + 0x48),0);
              uVar14 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
              System_Action___ctor_47b5ed0(uVar14,param_4,*(undefined8 *)PTR_DAT_04cb8370,0);
              Dino_BusSand_App_UI_CommerceRewardFly__Fly_22a8d24
                        (uVar15,uVar7,param_3,lVar11,uVar14,0,0);
              return;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
    puVar3 = PTR_DAT_04ca9ae8;
    if ((bRam0000000004f9c559 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04caa458);
      FUN_02132f7c(PTR_DAT_04caba50);
      FUN_02132f7c(PTR_DAT_04ca9ae8);
      FUN_02132f7c(PTR_DAT_04cabb00);
      FUN_02132f7c(PTR_DAT_04cb8378);
      bRam0000000004f9c559 = 1;
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar10 = UnityEngine_Object__op_Equality_43c6f30(param_4,0,0);
    puVar3 = PTR_DAT_04caba50;
    if (((uVar10 & 1) != 0) || (*(char *)(param_4 + 0x2c) != '\0')) {
      return;
    }
    if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88f == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    lVar11 = *(long *)puVar3;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar11 = *(long *)puVar3;
    }
    if (**(long **)(lVar11 + 0xb8) != 0) {
      uVar10 = Dino_BusSand_App_UI_PostWinFlow__Pending_2313d84
                         (*(undefined4 *)(**(long **)(lVar11 + 0xb8) + 0x44));
      if ((uVar10 & 1) == 0) {
        uVar14 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
        System_Action___ctor_47b5ed0(uVar14,param_4,*(undefined8 *)PTR_DAT_04cb8378,0);
        if (*(int *)(*(long *)PTR_DAT_04cabb00 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_UI_ScreenFade__Run_2289914(uVar14,&stack0xffffffffffffffc8,0);
        return;
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b88f == '\0') {
        FUN_02132f7c(PTR_DAT_04caba50);
        cRam0000000004f9b88f = '\x01';
      }
      lVar11 = *(long *)puVar3;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar11 = *(long *)puVar3;
      }
      puVar3 = PTR_DAT_04cac6b8;
      lVar11 = **(long **)(lVar11 + 0xb8);
      if (lVar11 != 0) {
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
        lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
        Dino_BusSand_App_GameApp___c__DisplayClass102_0___ctor_216a818(lVar8,0);
        if (lVar8 != 0) {
          *(long *)(lVar8 + 0x10) = lVar11;
          thunk_FUN_02134474((long *)(lVar8 + 0x10),lVar11);
          puVar4 = PTR_DAT_04cac440;
          puVar3 = PTR_DAT_04cabaf8;
          if (*(long *)(lVar11 + 0x28) != 0) {
            Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
                      (*(long *)(lVar11 + 0x28),*(undefined8 *)PTR_DAT_04cac6d0);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar7 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar4);
            }
            puVar4 = PTR_DAT_04cac6c8;
            puVar3 = PTR_DAT_04caa458;
            uVar10 = Dino_BusSand_App_Meta_Economy__GoNextLevelDirectly_220486c(uVar7,0);
            if (((uVar10 & 1) == 0) ||
               (uVar10 = Dino_BusSand_App_Meta_WinStreak__get_WantsHome_2295078(0),
               (uVar10 & 1) != 0)) {
              puVar5 = PTR_DAT_04cac6c0;
              lVar9 = *(long *)PTR_DAT_04cac6c0;
              if (*(int *)(lVar9 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar9 = *(long *)puVar5;
              }
              puVar5 = PTR_DAT_04cac458;
              bVar6 = false;
              if (**(char **)(lVar9 + 0xb8) != '\0') {
                lVar9 = *(long *)PTR_DAT_04cac458;
                if (*(int *)(lVar9 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                  lVar9 = *(long *)puVar5;
                }
                bVar6 = *(char *)(*(long *)(lVar9 + 0xb8) + 5) == '\0';
              }
            }
            else {
              bVar6 = false;
            }
            uVar14 = *(undefined8 *)puVar3;
            uVar12 = *(undefined8 *)(lVar11 + 0x28);
            *(bool *)(lVar8 + 0x18) = bVar6;
            uVar14 = thunk_FUN_0216e89c(uVar14);
            System_Action___ctor_47b5ed0(uVar14,lVar8,*(undefined8 *)puVar4,0);
            lVar8 = Dino_BusSand_App_UI_PostWinFlow__Run_231fbb4(uVar12,uVar14,0);
            if (lVar8 == 0) {
              thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
              uVar12 = thunk_FUN_0216e89c();
              uVar14 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
              System_NullReferenceException___ctor_483267c(uVar12,uVar14,0);
            }
            else {
              uVar10 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
              if ((uVar10 & 1) != 0) {
                if ((bRam0000000004fa84ef & 1) == 0) {
                  FUN_02132f7c(PTR_DAT_04cf7890);
                  bRam0000000004fa84ef = 1;
                }
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                lVar9 = *(long *)(lVar11 + 0x10);
                if (lVar9 != 0) {
                  if (pcRam0000000004fa8560 == (code *)0x0) {
                    pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
                  }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*pcRam0000000004fa8560)(lVar9,lVar8);
                  return;
                }
                    /* WARNING: Subroutine does not return */
                UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar11,0);
              }
              thunk_FUN_021985a8(PTR_DAT_04caa3a8);
              uVar12 = thunk_FUN_0216e89c();
              uVar14 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
              System_ArgumentException___ctor_47b660c(uVar12,uVar14,0);
            }
            uVar14 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
            FUN_021330e8(uVar12,uVar14);
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  return;
}

