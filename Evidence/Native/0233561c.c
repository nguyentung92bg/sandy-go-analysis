/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$MappedThemeIds
System_String_o* Dino_BusSand_App_Meta_GiftPackFeature__MappedThemeIds (int32_t packId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$MappedThemeIds
   System_String_o* Dino_BusSand_App_Meta_GiftPackFeature__MappedThemeIds (int32_t packId, const
   MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_GiftPackFeature__MappedThemeIds_223561c(int param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  int iStack_34;
  
  puVar2 = PTR_DAT_04caec48;
  if ((bRam0000000004f9bea1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec48);
    bRam0000000004f9bea1 = 1;
  }
  lVar4 = *(long *)puVar2;
  iStack_34 = 0;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  uVar5 = System_String__IsNullOrWhiteSpace_46d20a0(*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 8),0);
  if ((uVar5 & 1) == 0) {
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar2;
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
    if ((lVar4 == 0) || (lVar4 = System_String__Split_46d50c0(lVar4,0x3b,0,0), lVar4 == 0)) {
LAB_023357a4:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar1) {
      uVar9 = 0;
      do {
        if (uVar1 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        lVar6 = *(long *)(lVar4 + (long)(int)uVar9 * 8 + 0x20);
        if ((lVar6 == 0) || (lVar6 = System_String__Trim_46d6ee0(lVar6,0), lVar6 == 0))
        goto LAB_023357a4;
        iVar3 = System_String__IndexOf_46d72c4(lVar6,0x2d,0);
        if ((0 < iVar3) && (iVar3 < *(int *)(lVar6 + 0x10) + -1)) {
          lVar7 = System_String__Substring_46d4848(lVar6,0,iVar3,0);
          if (lVar7 == 0) goto LAB_023357a4;
          uVar8 = System_String__Trim_46d6ee0(lVar7,0);
          uVar5 = System_Int32__TryParse_482de64(uVar8,&iStack_34,0);
          if (((uVar5 & 1) != 0) && (iStack_34 == param_1)) {
            lVar4 = System_String__Substring_46d6a94(lVar6,iVar3 + 1,0);
            if (lVar4 != 0) {
              uVar8 = System_String__Trim_46d6ee0(lVar4,0);
              return uVar8;
            }
            goto LAB_023357a4;
          }
        }
        uVar1 = *(uint *)(lVar4 + 0x18);
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar1);
    }
  }
  return 0;
}

