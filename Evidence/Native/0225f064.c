/* IL2CPP: Dino.BusSand.App.Tables.<Rows>d__5$$MoveNext
bool Dino_BusSand_App_Tables__Rows_d__5__MoveNext (Dino_BusSand_App_Tables__Rows_d__5_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Tables.<Rows>d__5$$MoveNext
   bool Dino_BusSand_App_Tables__Rows_d__5__MoveNext (Dino_BusSand_App_Tables__Rows_d__5_o* __this,
   const MethodInfo* method); */

undefined8 Dino_BusSand_App_Tables__Rows_d__5__MoveNext_215f064(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  long *plStack_30;
  long lStack_28;
  
  lStack_28 = param_1;
  if ((bRam0000000004f9b815 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa2f0);
    FUN_02132f7c(PTR_DAT_04ca9b08);
    FUN_02132f7c(PTR_DAT_04caa300);
    FUN_02132f7c(PTR_DAT_04caa308);
    FUN_02132f7c(PTR_DAT_04caa318);
    FUN_02132f7c(PTR_DAT_04cac018);
    bRam0000000004f9b815 = 1;
  }
  puVar2 = PTR_DAT_04cac018;
  plStack_30 = &lStack_28;
  lStack_38 = 0;
  if (*(int *)(param_1 + 0x10) != 1) {
    if (*(int *)(param_1 + 0x10) != 0) {
      uVar7 = 0;
      goto LAB_0225f208;
    }
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar4 = Dino_BusSand_App_Tables__Table_215ebec(uVar7);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    System_Collections_Generic_Dictionary_object__object___GetEnumerator_34b47d8
              (&uStack_88,lVar4,*(undefined8 *)PTR_DAT_04caa2f0);
    uStack_58 = uStack_80;
    uStack_60 = uStack_88;
    uStack_48 = uStack_70;
    uStack_50 = uStack_78;
    uStack_40 = uStack_68;
    *(undefined8 *)(lStack_28 + 0x40) = uStack_80;
    *(undefined8 *)(lStack_28 + 0x38) = uStack_88;
    *(undefined8 *)(lStack_28 + 0x50) = uStack_70;
    *(undefined8 *)(lStack_28 + 0x48) = uStack_78;
    *(undefined8 *)(lStack_28 + 0x58) = uStack_68;
    thunk_FUN_02134474(lStack_28 + 0x38,0);
    param_1 = lStack_28;
  }
  *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
  puVar3 = PTR_DAT_04caa300;
  puVar2 = PTR_DAT_04ca9b08;
  do {
    do {
      uVar5 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext_3645d38
                        (param_1 + 0x38,*(undefined8 *)puVar3);
      if ((uVar5 & 1) == 0) {
        Dino_BusSand_App_Tables__Rows_d__5____m__Finally1_215f290(lStack_28);
        uVar7 = 0;
        *(undefined8 *)(lStack_28 + 0x58) = 0;
        *(undefined8 *)(lStack_28 + 0x40) = 0;
        *(undefined8 *)(lStack_28 + 0x38) = 0;
        *(undefined8 *)(lStack_28 + 0x50) = 0;
        *(undefined8 *)(lStack_28 + 0x48) = 0;
        goto LAB_0225f208;
      }
      plVar6 = *(long **)(lStack_28 + 0x50);
      param_1 = lStack_28;
    } while (plVar6 == (long *)0x0);
    bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
  } while ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
          (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2));
  *(long *)(lStack_28 + 0x18) = (long)plVar6;
  thunk_FUN_02134474((long *)(lStack_28 + 0x18));
  uVar7 = 1;
  *(undefined4 *)(lStack_28 + 0x10) = 1;
LAB_0225f208:
  lVar4 = lStack_38;
  if (lStack_38 == 0) {
    return uVar7;
  }
  FUN_01e7806c(&plStack_30);
                    /* WARNING: Subroutine does not return */
  FUN_0213321c(lVar4);
}

