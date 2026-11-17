/* IL2CPP: Dino.BusSand.App.Meta.EconomySettings.<Rows>d__29$$MoveNext
bool Dino_BusSand_App_Meta_EconomySettings__Rows_d__29__MoveNext (Dino_BusSand_App_Meta_EconomySettings__Rows_d__29_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.EconomySettings.<Rows>d__29$$MoveNext
   bool Dino_BusSand_App_Meta_EconomySettings__Rows_d__29__MoveNext
   (Dino_BusSand_App_Meta_EconomySettings__Rows_d__29_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_EconomySettings__Rows_d__29__MoveNext_220b5ec(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
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
  if ((bRam0000000004f9bceb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa2f0);
    FUN_02132f7c(PTR_DAT_04ca9b08);
    FUN_02132f7c(PTR_DAT_04cb1d58);
    FUN_02132f7c(PTR_DAT_04caa300);
    FUN_02132f7c(PTR_DAT_04caa308);
    FUN_02132f7c(PTR_DAT_04caa310);
    FUN_02132f7c(PTR_DAT_04caa318);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cb1d70);
    bRam0000000004f9bceb = 1;
  }
  puVar2 = PTR_DAT_04cac018;
  plStack_30 = &lStack_28;
  lStack_38 = 0;
  if (*(int *)(param_1 + 0x10) != 1) {
    if (*(int *)(param_1 + 0x10) != 0) {
      uVar6 = 0;
      goto LAB_0230b7e4;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar4 = Dino_BusSand_App_Tables__Table_215ebec(*(undefined8 *)PTR_DAT_04cb1d70,0);
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
    *(undefined8 *)(lStack_28 + 0x30) = uStack_80;
    *(undefined8 *)(lStack_28 + 0x28) = uStack_88;
    *(undefined8 *)(lStack_28 + 0x40) = uStack_70;
    *(undefined8 *)(lStack_28 + 0x38) = uStack_78;
    *(undefined8 *)(lStack_28 + 0x48) = uStack_68;
    thunk_FUN_02134474(lStack_28 + 0x28,0);
    param_1 = lStack_28;
  }
  *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
  puVar3 = PTR_DAT_04caa300;
  puVar2 = PTR_DAT_04ca9b08;
  do {
    do {
      uVar5 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext_3645d38
                        (param_1 + 0x28,*(undefined8 *)puVar3);
      if ((uVar5 & 1) == 0) {
        Dino_BusSand_App_Meta_EconomySettings__Rows_d__29____m__Finally1_220b86c(lStack_28);
        uVar6 = 0;
        *(undefined8 *)(lStack_28 + 0x48) = 0;
        *(undefined8 *)(lStack_28 + 0x30) = 0;
        *(undefined8 *)(lStack_28 + 0x28) = 0;
        *(undefined8 *)(lStack_28 + 0x40) = 0;
        *(undefined8 *)(lStack_28 + 0x38) = 0;
        goto LAB_0230b7e4;
      }
      param_1 = lStack_28;
    } while (*(long **)(lStack_28 + 0x40) == (long *)0x0);
    lVar4 = **(long **)(lStack_28 + 0x40);
    bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
  } while ((*(byte *)(lVar4 + 0x130) < bVar1) ||
          (*(long *)(*(long *)(lVar4 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2));
  uVar6 = *(undefined8 *)(lStack_28 + 0x38);
  if (*(int *)(*(long *)PTR_DAT_04cb1d58 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = Dino_BusSand_App_Meta_EconomySettings__Row_22054c8(uVar6);
  *(undefined8 *)(lStack_28 + 0x18) = uVar6;
  thunk_FUN_02134474();
  uVar6 = 1;
  *(undefined4 *)(lStack_28 + 0x10) = 1;
LAB_0230b7e4:
  lVar4 = lStack_38;
  if (lStack_38 == 0) {
    return uVar6;
  }
  FUN_01e7888c(&plStack_30);
                    /* WARNING: Subroutine does not return */
  FUN_0213321c(lVar4);
}

