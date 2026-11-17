/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$PourHighlights
System_Collections_Generic_List_Transform__o* Dino_BusSand_App_Gameplay_GameplayController__PourHighlights (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$PourHighlights
   System_Collections_Generic_List_Transform__o*
   Dino_BusSand_App_Gameplay_GameplayController__PourHighlights
   (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_Gameplay_GameplayController__PourHighlights_229e3b4(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  long lStack_50;
  undefined8 uStack_38;
  
  puVar4 = PTR_DAT_04cad728;
  puVar3 = PTR_DAT_04cad6f0;
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c242 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1890);
    FUN_02132f7c(PTR_DAT_04cb1898);
    FUN_02132f7c(PTR_DAT_04cb18a0);
    FUN_02132f7c(PTR_DAT_04cb18a8);
    FUN_02132f7c(PTR_DAT_04cad6c0);
    FUN_02132f7c(PTR_DAT_04cad6f0);
    FUN_02132f7c(PTR_DAT_04cad728);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c242 = 1;
  }
  uStack_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  lStack_50 = 0;
  uStack_38 = 0;
  lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Collections_Generic_List_object____ctor_3a8138c(lVar5,*(undefined8 *)puVar3);
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = UnityEngine_Object__op_Equality_43c6f30(uVar9,0,0);
  if ((uVar6 & 1) != 0) {
    return lVar5;
  }
  lVar7 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_1);
  if (lVar7 == 0) {
    return lVar5;
  }
  lVar7 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(param_1);
  if ((lVar7 != 0) && (*(long *)(lVar7 + 0x20) != 0)) {
    uStack_38 = Dino_BusSand_Core_Road__get_Buses_2411e9c(*(long *)(lVar7 + 0x20),0);
    Dino_BusSand_Core_ListView_object___GetEnumerator_3955958
              (&uStack_78,&uStack_38,*(undefined8 *)PTR_DAT_04cb18a8);
    puVar4 = PTR_DAT_04cb1898;
    puVar3 = PTR_DAT_04cad6c0;
    puStack_58 = puStack_70;
    uStack_60 = uStack_78;
    lStack_50 = lStack_68;
    uStack_78 = 0;
    puStack_70 = &uStack_60;
LAB_0239e50c:
    uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                      (&uStack_60,*(undefined8 *)puVar4);
    if ((uVar6 & 1) != 0) {
      if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar7 = Dino_BusSand_View_GameView__VehicleOf_23ab408
                        (*(long *)(param_1 + 0x38),*(undefined4 *)(lStack_50 + 0x10),0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
      if ((uVar6 & 1) != 0) {
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar9 = UnityEngine_Component__get_transform_43bcd18(lVar7,0);
        if (lVar5 != 0) {
          lVar7 = *(long *)(lVar5 + 0x10);
          lVar8 = *(long *)puVar3;
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar7 != 0) {
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
              thunk_FUN_02134474();
            }
            else {
              System_Collections_Generic_List_object___AddWithResize_3a81bf4
                        (lVar5,uVar9,
                         *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
            }
            goto LAB_0239e50c;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      goto LAB_0239e50c;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_60,*(undefined8 *)PTR_DAT_04cb1890);
    if (*(long *)(param_1 + 0x38) != 0) {
      uVar9 = Dino_BusSand_View_GameView__get_BoardTransform_23ab480(*(long *)(param_1 + 0x38),0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar2);
      }
      uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
      if ((uVar6 & 1) == 0) {
        return lVar5;
      }
      if ((*(long *)(param_1 + 0x38) != 0) &&
         (uVar9 = Dino_BusSand_View_GameView__get_BoardTransform_23ab480
                            (*(long *)(param_1 + 0x38),0), lVar5 != 0)) {
        lVar7 = *(long *)(lVar5 + 0x10);
        lVar8 = *(long *)puVar3;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar7 != 0) {
          uVar1 = *(uint *)(lVar5 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
            thunk_FUN_02134474();
            return lVar5;
          }
          System_Collections_Generic_List_object___AddWithResize_3a81bf4
                    (lVar5,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          return lVar5;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

