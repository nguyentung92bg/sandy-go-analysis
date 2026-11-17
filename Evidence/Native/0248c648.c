/* IL2CPP: Dino.BusSand.Tween$$KillAll
void Dino_BusSand_Tween__KillAll (Il2CppObject* owner, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Tween$$KillAll
   void Dino_BusSand_Tween__KillAll (Il2CppObject* owner, const MethodInfo* method); */

void Dino_BusSand_Tween__KillAll_238c648(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  puVar1 = PTR_DAT_04cbbe20;
  if ((bRam0000000004f9c8a7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbbe20);
    bRam0000000004f9c8a7 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if ((bRam0000000004f9c8af & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbbea0);
    FUN_02132f7c(PTR_DAT_04cbbea8);
    FUN_02132f7c(PTR_DAT_04cbbe20);
    bRam0000000004f9c8af = 1;
  }
  puVar2 = PTR_DAT_04cbbea8;
  puVar1 = PTR_DAT_04cbbe20;
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
      goto LAB_0248c7a8;
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
LAB_0248c864:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
LAB_0248c7a8:
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (lVar4 == 0) goto LAB_0248c864;
  if (*(int *)(lVar4 + 0x18) <= iVar5) {
    return;
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
    if (lVar4 == 0) goto LAB_0248c864;
  }
  lVar3 = System_Collections_Generic_List_object___get_Item_3a81924
                    (lVar4,iVar5,*(undefined8 *)puVar2);
  if (lVar3 == 0) goto LAB_0248c864;
  if (*(long *)(lVar3 + 0x18) == param_1) {
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar1;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
    if ((lVar3 == 0) ||
       (lVar3 = System_Collections_Generic_List_object___get_Item_3a81924
                          (lVar3,iVar5,*(undefined8 *)puVar2), lVar3 == 0)) goto LAB_0248c864;
    if (*(char *)(lVar3 + 0x10) != '\0') {
      *(undefined1 *)(lVar3 + 0x10) = 0;
    }
  }
  lVar3 = *(long *)puVar1;
  iVar5 = iVar5 + 1;
  goto LAB_0248c7a8;
}

