/* IL2CPP: Dino.BusSand.Core.SandPalette$$Id
uint8_t Dino_BusSand_Core_SandPalette__Id (System_String_o* name, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.SandPalette$$Id
   uint8_t Dino_BusSand_Core_SandPalette__Id (System_String_o* name, const MethodInfo* method); */

byte Dino_BusSand_Core_SandPalette__Id_2419278(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  byte abStack_44 [4];
  
  puVar3 = PTR_DAT_04cbbfb8;
  if ((bRam0000000004f9cb81 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d88);
    FUN_02132f7c(PTR_DAT_04cbe718);
    FUN_02132f7c(PTR_DAT_04cbe720);
    FUN_02132f7c(PTR_DAT_04cbe728);
    FUN_02132f7c(PTR_DAT_04cbe730);
    FUN_02132f7c(PTR_DAT_04cbe738);
    FUN_02132f7c(PTR_DAT_04ca9d90);
    FUN_02132f7c(PTR_DAT_04ca9d98);
    FUN_02132f7c(PTR_DAT_04ca9da0);
    FUN_02132f7c(PTR_DAT_04ca9da8);
    FUN_02132f7c(PTR_DAT_04ca9db0);
    FUN_02132f7c(PTR_DAT_04cbbfb8);
    FUN_02132f7c(PTR_DAT_04caa2d0);
    bRam0000000004f9cb81 = 1;
  }
  lVar6 = *(long *)puVar3;
  abStack_44[0] = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar6 = *(long *)puVar3;
  }
  puVar2 = PTR_DAT_04caa2d0;
  if (*(long *)(*(long *)(lVar6 + 0xb8) + 0x20) != 0) {
LAB_02519554:
    if (param_1 == 0) {
      abStack_44[0] = 0;
    }
    else {
      lVar6 = *(long *)puVar3;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar6 = *(long *)puVar3;
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x20);
      if (lVar6 == 0) {
LAB_025195c0:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar11 = System_Collections_Generic_Dictionary_object__byte___TryGetValue_34998d0
                         (lVar6,param_1,abStack_44,*(undefined8 *)PTR_DAT_04cbe718);
      if ((uVar11 & 1) == 0) {
        abStack_44[0] = 0;
      }
    }
    return abStack_44[0];
  }
  if (*(int *)(*(long *)PTR_DAT_04caa2d0 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b671 == '\0') {
    FUN_02132f7c(PTR_DAT_04caa2d0);
    cRam0000000004f9b671 = '\x01';
  }
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar6 = *(long *)puVar2;
  }
  uVar12 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10);
  uVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbe738);
  System_Collections_Generic_Dictionary_object__byte____ctor_3497054
            (uVar7,uVar12,*(undefined8 *)PTR_DAT_04cbe720);
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar6 = *(long *)puVar3;
  }
  puVar8 = (undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x20);
  *puVar8 = uVar7;
  thunk_FUN_02134474(puVar8,uVar7);
  puVar2 = PTR_DAT_04cbe730;
  uVar11 = 0;
LAB_02519428:
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar6 = *(long *)puVar3;
  }
  lVar9 = *(long *)(lVar6 + 0xb8);
  lVar10 = *(long *)(lVar9 + 8);
  if (lVar10 != 0) {
    if ((long)uVar11 < (long)*(int *)(lVar10 + 0x18)) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar9 = *(long *)(*(long *)puVar3 + 0xb8);
        lVar10 = *(long *)(lVar9 + 8);
        if (lVar10 == 0) goto LAB_025195c0;
      }
      if (*(uint *)(lVar10 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      if (*(long *)(lVar9 + 0x20) != 0) goto code_r0x02519484;
      goto LAB_025195c0;
    }
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar9 = *(long *)(*(long *)puVar3 + 0xb8);
    }
    if (*(long *)(lVar9 + 0x10) != 0) {
      System_Collections_Generic_Dictionary_object__object___GetEnumerator_34b47d8
                (&uStack_80,*(long *)(lVar9 + 0x10),*(undefined8 *)PTR_DAT_04ca9d88);
      puVar4 = PTR_DAT_04cbe728;
      puVar1 = PTR_DAT_04ca9d98;
      while (uVar11 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext_3645d38
                                (&uStack_80,*(undefined8 *)puVar1), uVar12 = uStack_68,
            uVar7 = uStack_70, (uVar11 & 1) != 0) {
        lVar6 = *(long *)puVar3;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar6 = *(long *)puVar3;
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x20);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar5 = System_Collections_Generic_Dictionary_object__byte___get_Item_3497d28
                          (lVar6,uVar12,*(undefined8 *)puVar4);
        System_Collections_Generic_Dictionary_object__byte___set_Item_3497d94
                  (lVar6,uVar7,uVar5,*(undefined8 *)puVar2);
      }
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose_3645e58
                (&uStack_80,*(undefined8 *)PTR_DAT_04ca9d90);
      goto LAB_02519554;
    }
  }
  goto LAB_025195c0;
code_r0x02519484:
  lVar6 = uVar11 * 8;
  uVar11 = uVar11 + 1;
  System_Collections_Generic_Dictionary_object__byte___set_Item_3497d94
            (*(long *)(lVar9 + 0x20),*(undefined8 *)(lVar10 + lVar6 + 0x20),uVar11 & 0xffffffff,
             *(undefined8 *)puVar2);
  goto LAB_02519428;
}

