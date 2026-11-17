/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$OnDisable
void Dino_BusSand_App_UI_HomeAtelier__OnDisable (Dino_BusSand_App_UI_HomeAtelier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$OnDisable
   void Dino_BusSand_App_UI_HomeAtelier__OnDisable (Dino_BusSand_App_UI_HomeAtelier_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_HomeAtelier__OnDisable_22dac80(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  
  puVar1 = PTR_DAT_04cad568;
  if ((bRam0000000004f9c3e6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cac1e8);
    bRam0000000004f9c3e6 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b94e == '\0') {
    FUN_02132f7c(PTR_DAT_04cad568);
    cRam0000000004f9b94e = '\x01';
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  puVar1 = PTR_DAT_04cac1e8;
  if (**(long **)(lVar3 + 0xb8) != 0) {
    Dino_BusSand_GameAudio__Pencil_23854a0(0,0x3f800000,**(long **)(lVar3 + 0xb8),0);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
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
  iVar6 = 0;
  while( true ) {
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar1;
    }
    lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    if (lVar5 == 0) break;
    if (*(int *)(lVar5 + 0x18) <= iVar6) {
      iVar6 = 0;
      goto LAB_02261bf0;
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      if (lVar5 == 0) break;
    }
    lVar3 = System_Collections_Generic_List_object___get_Item_3a81924
                      (lVar5,iVar6,*(undefined8 *)puVar2);
    if (lVar3 == 0) break;
    if (*(long *)(lVar3 + 0x18) == param_1) {
      lVar3 = *(long *)puVar1;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar3 = *(long *)puVar1;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
      if ((lVar3 == 0) ||
         (lVar3 = System_Collections_Generic_List_object___get_Item_3a81924
                            (lVar3,iVar6,*(undefined8 *)puVar2), lVar3 == 0)) break;
      if (*(char *)(lVar3 + 0x10) != '\0') {
        *(undefined1 *)(lVar3 + 0x10) = 0;
      }
    }
    iVar6 = iVar6 + 1;
  }
LAB_02261cac:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
LAB_02261bf0:
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (lVar5 == 0) goto LAB_02261cac;
  if (*(int *)(lVar5 + 0x18) <= iVar6) {
    return;
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
    if (lVar5 == 0) goto LAB_02261cac;
  }
  lVar3 = System_Collections_Generic_List_object___get_Item_3a81924
                    (lVar5,iVar6,*(undefined8 *)puVar2);
  if (lVar3 == 0) goto LAB_02261cac;
  if (*(long *)(lVar3 + 0x18) == param_1) {
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar1;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
    if ((lVar3 == 0) ||
       (lVar3 = System_Collections_Generic_List_object___get_Item_3a81924
                          (lVar3,iVar6,*(undefined8 *)puVar2), lVar3 == 0)) goto LAB_02261cac;
    if (*(char *)(lVar3 + 0x10) != '\0') {
      *(undefined1 *)(lVar3 + 0x10) = 0;
    }
  }
  lVar3 = *(long *)puVar1;
  iVar6 = iVar6 + 1;
  goto LAB_02261bf0;
}

