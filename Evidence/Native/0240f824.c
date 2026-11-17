/* IL2CPP: Dino.BusSand.App.UI.HudPanel.<ItemTargets>d__114$$MoveNext
bool Dino_BusSand_App_UI_HudPanel__ItemTargets_d__114__MoveNext (Dino_BusSand_App_UI_HudPanel__ItemTargets_d__114_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HudPanel.<ItemTargets>d__114$$MoveNext
   bool Dino_BusSand_App_UI_HudPanel__ItemTargets_d__114__MoveNext
   (Dino_BusSand_App_UI_HudPanel__ItemTargets_d__114_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_HudPanel__ItemTargets_d__114__MoveNext_230f824(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  lStack_28 = param_1;
  if ((bRam0000000004f9c541 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab9e8);
    FUN_02132f7c(PTR_DAT_04cb1898);
    FUN_02132f7c(PTR_DAT_04cab9f0);
    FUN_02132f7c(PTR_DAT_04cb18a0);
    FUN_02132f7c(PTR_DAT_04cab9f8);
    FUN_02132f7c(PTR_DAT_04cb18a8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c541 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar9 = *(long *)(param_1 + 0x28);
  plStack_48 = &lStack_28;
  uStack_40 = 0;
  uStack_38 = 0;
  lStack_50 = 0;
  if (iVar1 == 2) {
LAB_0240fb10:
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffc;
    puVar3 = PTR_DAT_04cab9e8;
    puVar2 = PTR_DAT_04ca9ae8;
    do {
      do {
        uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                          (param_1 + 0x50,*(undefined8 *)puVar3);
        if ((uVar4 & 1) == 0) {
          Dino_BusSand_App_UI_HudPanel__ItemTargets_d__114____m__Finally2_230fddc();
          uVar7 = 0;
          *(undefined8 *)(lStack_28 + 0x58) = 0;
          *(undefined8 *)(lStack_28 + 0x60) = 0;
          *(undefined8 *)(lStack_28 + 0x50) = 0;
          goto LAB_0240fc2c;
        }
        if (*(long *)(lStack_28 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar6 = *(long *)(lStack_28 + 0x60);
        uVar4 = Dino_BusSand_Core_StageEngine__IsMechanicVehicle_2429114
                          (*(long *)(lStack_28 + 0x30),lVar6,0);
        param_1 = lStack_28;
      } while ((uVar4 & 1) != 0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(long *)(lVar9 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar5 = *(long *)(*(long *)(lVar9 + 0x40) + 0x38);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar6 = Dino_BusSand_View_GameView__VehicleOf_23ab408(lVar5,*(undefined4 *)(lVar6 + 0x10),0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
      param_1 = lStack_28;
    } while ((uVar4 & 1) == 0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar7 = UnityEngine_Component__get_transform_43bcd18(lVar6,0);
    *(undefined8 *)(lStack_28 + 0x18) = uVar7;
    thunk_FUN_02134474();
    uVar7 = 1;
    *(undefined4 *)(lStack_28 + 0x10) = 2;
    goto LAB_0240fc2c;
  }
  if (iVar1 == 1) {
LAB_0240f9ec:
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
    puVar3 = PTR_DAT_04cb1898;
    puVar2 = PTR_DAT_04ca9ae8;
    do {
      do {
        uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                          (param_1 + 0x38,*(undefined8 *)puVar3);
        if ((uVar4 & 1) == 0) {
          Dino_BusSand_App_UI_HudPanel__ItemTargets_d__114____m__Finally1_230fd8c();
          uVar7 = 0;
          *(undefined8 *)(lStack_28 + 0x40) = 0;
          *(undefined8 *)(lStack_28 + 0x48) = 0;
          *(undefined8 *)(lStack_28 + 0x38) = 0;
          goto LAB_0240fc2c;
        }
        lVar6 = *(long *)(lStack_28 + 0x48);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        param_1 = lStack_28;
      } while (((*(int *)(lVar6 + 0x28) != 1) ||
               (uVar4 = Dino_BusSand_Core_RoadBus__get_IsComplete_2411838(lVar6,0),
               param_1 = lStack_28, (uVar4 & 1) != 0)) || (0 < *(int *)(lVar6 + 0x5c)));
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(long *)(lVar9 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar5 = *(long *)(*(long *)(lVar9 + 0x40) + 0x38);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar6 = Dino_BusSand_View_GameView__VehicleOf_23ab408(lVar5,*(undefined4 *)(lVar6 + 0x10),0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
      param_1 = lStack_28;
    } while ((uVar4 & 1) == 0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar7 = UnityEngine_Component__get_transform_43bcd18(lVar6,0);
    *(undefined8 *)(lStack_28 + 0x18) = uVar7;
    thunk_FUN_02134474();
    uVar7 = 1;
    *(undefined4 *)(lStack_28 + 0x10) = 1;
  }
  else {
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      puVar2 = PTR_DAT_04ca9ae8;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar7 = *(undefined8 *)(lVar9 + 0x40);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
      lVar6 = lStack_28;
      if ((uVar4 & 1) == 0) {
        uVar7 = 0;
      }
      else {
        if (*(long *)(lVar9 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar7 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248
                          (*(long *)(lVar9 + 0x40),0);
      }
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      puVar8 = (undefined8 *)(lVar6 + 0x30);
      *puVar8 = uVar7;
      thunk_FUN_02134474(puVar8);
      if (*(long *)(lStack_28 + 0x30) != 0) {
        if (*(long *)(lVar9 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar7 = *(undefined8 *)(*(long *)(lVar9 + 0x40) + 0x38);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0);
        if ((uVar4 & 1) == 0) {
          lVar6 = *(long *)(lStack_28 + 0x30);
          if (*(int *)(lVar9 + 0x48) != 0x2714) {
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            if (*(long *)(lVar6 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            uStack_40 = Dino_BusSand_Core_TruckGrid__get_Trucks_241c3d0(*(long *)(lVar6 + 0x28),0);
            Dino_BusSand_Core_ListView_object___GetEnumerator_3955958
                      (&uStack_88,&uStack_40,*(undefined8 *)PTR_DAT_04cab9f8);
            uStack_68 = uStack_80;
            uStack_70 = uStack_88;
            uStack_60 = uStack_78;
            *(undefined8 *)(lStack_28 + 0x58) = uStack_80;
            *(undefined8 *)(lStack_28 + 0x50) = uStack_88;
            *(undefined8 *)(lStack_28 + 0x60) = uStack_78;
            thunk_FUN_02134474(lStack_28 + 0x50,0);
            param_1 = lStack_28;
            goto LAB_0240fb10;
          }
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if (*(long *)(lVar6 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uStack_38 = Dino_BusSand_Core_Road__get_Buses_2411e9c(*(long *)(lVar6 + 0x20),0);
          Dino_BusSand_Core_ListView_object___GetEnumerator_3955958
                    (&uStack_88,&uStack_38,*(undefined8 *)PTR_DAT_04cb18a8);
          uStack_68 = uStack_80;
          uStack_70 = uStack_88;
          uStack_60 = uStack_78;
          *(undefined8 *)(lStack_28 + 0x40) = uStack_80;
          *(undefined8 *)(lStack_28 + 0x38) = uStack_88;
          *(undefined8 *)(lStack_28 + 0x48) = uStack_78;
          thunk_FUN_02134474(lStack_28 + 0x38,0);
          param_1 = lStack_28;
          goto LAB_0240f9ec;
        }
      }
    }
    uVar7 = 0;
  }
LAB_0240fc2c:
  lVar9 = lStack_50;
  if (lStack_50 != 0) {
    FUN_01e7a278(&plStack_48);
                    /* WARNING: Subroutine does not return */
    FUN_0213321c(lVar9);
  }
  return uVar7;
}

