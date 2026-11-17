/* IL2CPP: Dino.BusSand.View.Fx$$OnDestroy
void Dino_BusSand_View_Fx__OnDestroy (Dino_BusSand_View_Fx_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.Fx$$OnDestroy
   void Dino_BusSand_View_Fx__OnDestroy (Dino_BusSand_View_Fx_o* __this, const MethodInfo* method);
    */

void Dino_BusSand_View_Fx__OnDestroy_2399e18(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = PTR_DAT_04cbc100;
  if ((bRam0000000004f9c8f7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab698);
    FUN_02132f7c(PTR_DAT_04cab6b8);
    FUN_02132f7c(PTR_DAT_04cab6d8);
    FUN_02132f7c(PTR_DAT_04cbc100);
    FUN_02132f7c(PTR_DAT_04cab728);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c8f7 = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9c95a == '\0') {
    FUN_02132f7c(PTR_DAT_04cbc100);
    cRam0000000004f9c95a = '\x01';
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  uVar6 = **(undefined8 **)(lVar4 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar6,param_1,0);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9c95b == '\0') {
      FUN_02132f7c(PTR_DAT_04cbc100);
      cRam0000000004f9c95b = '\x01';
    }
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar2;
    }
    **(undefined8 **)(lVar4 + 0xb8) = 0;
    thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar2 + 0xb8),0);
  }
  puVar3 = PTR_DAT_04cab6b8;
  puVar2 = PTR_DAT_04cab698;
  if (*(long *)(param_1 + 0x60) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_48,*(long *)(param_1 + 0x60),*(undefined8 *)PTR_DAT_04cab728);
    while (uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                             (&uStack_48,*(undefined8 *)puVar3), uVar6 = uStack_38, (uVar5 & 1) != 0
          ) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
      if ((uVar5 & 1) != 0) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        UnityEngine_Object__Destroy_43c8114(uVar6,0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_48,*(undefined8 *)puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

