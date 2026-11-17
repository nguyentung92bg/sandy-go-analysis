/* IL2CPP: Dino.BusSand.App.Meta.GiftPackTrack$$Item
System_Collections_Generic_Dictionary_string__object__o* Dino_BusSand_App_Meta_GiftPackTrack__Item (int32_t id, int64_t n, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackTrack$$Item
   System_Collections_Generic_Dictionary_string__object__o*
   Dino_BusSand_App_Meta_GiftPackTrack__Item (int32_t id, int64_t n, const MethodInfo* method); */

long Dino_BusSand_App_Meta_GiftPackTrack__Item_223e8ec(undefined4 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_50;
  undefined4 uStack_44;
  
  puVar3 = PTR_DAT_04ca9b50;
  puVar2 = PTR_DAT_04ca9b08;
  uStack_44 = param_1;
  if ((bRam0000000004f9beed & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04caab38);
    FUN_02132f7c(PTR_DAT_04ca9b50);
    FUN_02132f7c(PTR_DAT_04ca9b08);
    FUN_02132f7c(PTR_DAT_04cac768);
    FUN_02132f7c(PTR_DAT_04cacc78);
    FUN_02132f7c(PTR_DAT_04cacc88);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9beed = 1;
  }
  lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_Dictionary_object__object____ctor_34b3628(lVar8,*(undefined8 *)puVar3);
  uVar9 = System_Int32__ToString_482d750(&uStack_44,0);
  puVar6 = PTR_DAT_04cacc88;
  puVar5 = PTR_DAT_04cacc78;
  puVar4 = PTR_DAT_04cac5c0;
  puVar3 = PTR_DAT_04caab38;
  puVar2 = PTR_DAT_04ca9c30;
  if (lVar8 != 0) {
    System_Collections_Generic_Dictionary_object__object___Add_34b43a4
              (lVar8,*(undefined8 *)PTR_DAT_04cac768,uVar9,*(undefined8 *)PTR_DAT_04caab38);
    uStack_50 = param_2;
    uVar9 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x68),&uStack_50);
    System_Collections_Generic_Dictionary_object__object___Add_34b43a4
              (lVar8,*(undefined8 *)puVar6,uVar9,*(undefined8 *)puVar3);
    uVar7 = uStack_44;
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar10 = Dino_BusSand_App_Analytics__ItemName_2174510(uVar7,0,0);
    lVar1 = *(long *)puVar2;
    if (lVar10 != 0) {
      lVar1 = lVar10;
    }
    System_Collections_Generic_Dictionary_object__object___Add_34b43a4
              (lVar8,*(undefined8 *)puVar5,lVar1,*(undefined8 *)puVar3);
    return lVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

