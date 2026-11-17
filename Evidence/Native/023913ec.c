/* IL2CPP: Dino.BusSand.App.UI.UiMotion$$Stop
void Dino_BusSand_App_UI_UiMotion__Stop (UnityEngine_Transform_o* t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiMotion$$Stop
   void Dino_BusSand_App_UI_UiMotion__Stop (UnityEngine_Transform_o* t, const MethodInfo* method);
    */

void Dino_BusSand_App_UI_UiMotion__Stop_22913ec(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar6;
  long lVar7;
  int iVar8;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c1c6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cadf40);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cac1e8);
    bRam0000000004f9c1c6 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  puVar2 = PTR_DAT_04cac1e8;
  if ((uVar3 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_04cac1e8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Tween__KillAll_2161a90(param_1,0);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar4 = UnityEngine_Component__get_gameObject_43bcde8(param_1,0);
    Dino_BusSand_App_Tween__KillAll_2161a90(uVar4,0);
    lVar5 = UnityEngine_Component__GetComponent_object__26f97e8
                      (param_1,*(undefined8 *)PTR_DAT_04cadf40);
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar7);
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      puVar1 = PTR_DAT_04cac1f0;
      uVar4 = 0;
      if ((bRam0000000004f9b82a & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cac1f0,0);
        bRam0000000004f9b82a = 1;
        uVar4 = extraout_x1;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        uVar4 = extraout_x1_00;
      }
      if ((bRam0000000004f9b834 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cac278,uVar4);
        FUN_02132f7c(PTR_DAT_04cac280);
        FUN_02132f7c(PTR_DAT_04cac1f0);
        bRam0000000004f9b834 = 1;
      }
      puVar2 = PTR_DAT_04cac280;
      puVar1 = PTR_DAT_04cac1f0;
      iVar8 = 0;
      while( true ) {
        lVar7 = *(long *)puVar1;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar7 = *(long *)puVar1;
        }
        lVar6 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
        if (lVar6 == 0) break;
        if (*(int *)(lVar6 + 0x18) <= iVar8) {
          iVar8 = 0;
          goto LAB_02261bf0;
        }
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar6 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
          if (lVar6 == 0) break;
        }
        lVar7 = System_Collections_Generic_List_object___get_Item_3a81924
                          (lVar6,iVar8,*(undefined8 *)puVar2);
        if (lVar7 == 0) break;
        if (*(long *)(lVar7 + 0x18) == lVar5) {
          lVar7 = *(long *)puVar1;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar7 = *(long *)puVar1;
          }
          lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
          if ((lVar7 == 0) ||
             (lVar7 = System_Collections_Generic_List_object___get_Item_3a81924
                                (lVar7,iVar8,*(undefined8 *)puVar2), lVar7 == 0)) break;
          if (*(char *)(lVar7 + 0x10) != '\0') {
            *(undefined1 *)(lVar7 + 0x10) = 0;
          }
        }
        iVar8 = iVar8 + 1;
      }
LAB_02261cac:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return;
LAB_02261bf0:
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar1;
  }
  lVar6 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
  if (lVar6 == 0) goto LAB_02261cac;
  if (*(int *)(lVar6 + 0x18) <= iVar8) {
    return;
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar6 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
    if (lVar6 == 0) goto LAB_02261cac;
  }
  lVar7 = System_Collections_Generic_List_object___get_Item_3a81924
                    (lVar6,iVar8,*(undefined8 *)puVar2);
  if (lVar7 == 0) goto LAB_02261cac;
  if (*(long *)(lVar7 + 0x18) == lVar5) {
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar7 = *(long *)puVar1;
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
    if ((lVar7 == 0) ||
       (lVar7 = System_Collections_Generic_List_object___get_Item_3a81924
                          (lVar7,iVar8,*(undefined8 *)puVar2), lVar7 == 0)) goto LAB_02261cac;
    if (*(char *)(lVar7 + 0x10) != '\0') {
      *(undefined1 *)(lVar7 + 0x10) = 0;
    }
  }
  lVar7 = *(long *)puVar1;
  iVar8 = iVar8 + 1;
  goto LAB_02261bf0;
}

