/* IL2CPP: Dino.BusSand.App.UI.StoreWaitingPanel$$Hide
void Dino_BusSand_App_UI_StoreWaitingPanel__Hide (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StoreWaitingPanel$$Hide
   void Dino_BusSand_App_UI_StoreWaitingPanel__Hide (const MethodInfo* method); */

void Dino_BusSand_App_UI_StoreWaitingPanel__Hide_22bb980(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  if ((bRam0000000004f9c30b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb64e0);
    bRam0000000004f9c30b = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  puVar2 = PTR_DAT_04cad1b0;
  uVar9 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  lVar4 = **(long **)(*(long *)puVar2 + 0xb8);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar6 = *(long *)PTR_DAT_04cb64e0;
  if (*(long *)(lVar6 + 0x38) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1b70);
    if (*(long *)(lVar6 + 0x38) == 0) {
      FUN_0216b4cc(lVar6);
    }
  }
  if ((*(long *)(lVar4 + 0x38) != 0) &&
     (lVar5 = System_Collections_Generic_List_object___ToArray_3a83728
                        (*(long *)(lVar4 + 0x38),*(undefined8 *)PTR_DAT_04cb1b70), lVar5 != 0)) {
    if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
      uVar3 = 0;
      uVar8 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
      do {
        if (uVar8 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        uVar9 = *(undefined8 *)(lVar5 + 0x20 + uVar3 * 8);
        lVar7 = **(long **)(lVar6 + 0x38);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_0216b470(lVar7);
        }
        lVar7 = thunk_FUN_0216e7a0(uVar9,lVar7);
        if (lVar7 != 0) {
          Dino_BusSand_App_UI_UIManager__Close_21fe9a0(lVar4,uVar9,0);
        }
        uVar8 = (ulong)*(uint *)(lVar5 + 0x18);
        uVar3 = uVar3 + 1;
      } while ((long)uVar3 < (long)(int)*(uint *)(lVar5 + 0x18));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

