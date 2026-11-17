/* IL2CPP: Dino.BusSand.App.TweenRunner$$KillOwner
void Dino_BusSand_App_TweenRunner__KillOwner (Il2CppObject* owner, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.TweenRunner$$KillOwner
   void Dino_BusSand_App_TweenRunner__KillOwner (Il2CppObject* owner, const MethodInfo* method); */

void Dino_BusSand_App_TweenRunner__KillOwner_2161ae4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  if ((bRam0000000004f9b834 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac278);
    FUN_02132f7c(PTR_DAT_04cac280);
    FUN_02132f7c(PTR_DAT_04cac1f0);
    bRam0000000004f9b834 = 1;
  }
  puVar2 = PTR_DAT_04cac280;
  puVar1 = PTR_DAT_04cac1f0;
  iVar5 = 0;
  while( true ) {
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    if (lVar4 == 0) break;
    if (*(int *)(lVar4 + 0x18) <= iVar5) {
      iVar5 = 0;
      goto LAB_02261bf0;
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      if (lVar4 == 0) break;
    }
    lVar3 = System_Collections_Generic_List_object___get_Item_3a81924
                      (lVar4,iVar5,*(undefined8 *)puVar2);
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
                            (lVar3,iVar5,*(undefined8 *)puVar2), lVar3 == 0)) break;
      if (*(char *)(lVar3 + 0x10) != '\0') {
        *(undefined1 *)(lVar3 + 0x10) = 0;
      }
    }
    iVar5 = iVar5 + 1;
  }
LAB_02261cac:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
LAB_02261bf0:
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (lVar4 == 0) goto LAB_02261cac;
  if (*(int *)(lVar4 + 0x18) <= iVar5) {
    return;
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
    if (lVar4 == 0) goto LAB_02261cac;
  }
  lVar3 = System_Collections_Generic_List_object___get_Item_3a81924
                    (lVar4,iVar5,*(undefined8 *)puVar2);
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
                          (lVar3,iVar5,*(undefined8 *)puVar2), lVar3 == 0)) goto LAB_02261cac;
    if (*(char *)(lVar3 + 0x10) != '\0') {
      *(undefined1 *)(lVar3 + 0x10) = 0;
    }
  }
  lVar3 = *(long *)puVar1;
  iVar5 = iVar5 + 1;
  goto LAB_02261bf0;
}

