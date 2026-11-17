/* IL2CPP: Dino.BusSand.App.Meta.TrackingPlan$$PatchSdkEvent
System_String_o* Dino_BusSand_App_Meta_TrackingPlan__PatchSdkEvent (System_String_o* name, System_Collections_Generic_Dictionary_string__object__o* d, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.TrackingPlan$$PatchSdkEvent
   System_String_o* Dino_BusSand_App_Meta_TrackingPlan__PatchSdkEvent (System_String_o* name,
   System_Collections_Generic_Dictionary_string__object__o* d, const MethodInfo* method); */

undefined8
Dino_BusSand_App_Meta_TrackingPlan__PatchSdkEvent_2275dbc(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  byte *pbVar11;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  long lStack_68;
  
  puVar5 = PTR_DAT_04cb2240;
  if ((bRam0000000004f9c11c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb48b8);
    FUN_02132f7c(PTR_DAT_04caaf40);
    FUN_02132f7c(PTR_DAT_04ca9b58);
    FUN_02132f7c(PTR_DAT_04cb2240);
    FUN_02132f7c(PTR_DAT_04ca9b60);
    bRam0000000004f9c11c = 1;
  }
  lVar6 = *(long *)puVar5;
  plStack_70 = (long *)0x0;
  lStack_68 = 0;
  uStack_78 = 0;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar6 = *(long *)puVar5;
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x70);
  if (lVar6 != 0) {
    uVar7 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                      (lVar6,param_1,&lStack_68,*(undefined8 *)PTR_DAT_04cb48b8);
    lVar6 = lStack_68;
    puVar4 = PTR_DAT_04caaf40;
    puVar3 = PTR_DAT_04ca9b58;
    puVar2 = PTR_DAT_04ca9ac8;
    if ((uVar7 & 1) == 0) {
      uVar10 = 0;
    }
    else {
      if (lStack_68 == 0) goto LAB_02375fa4;
      if (0 < (int)*(ulong *)(lStack_68 + 0x18)) {
        uVar7 = 0;
        uVar9 = *(ulong *)(lStack_68 + 0x18) & 0xffffffff;
        pbVar11 = (byte *)(lStack_68 + 0x2c);
        do {
          if (uVar9 <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          if (((*pbVar11 & 1) != 0) && (iVar1 = *(int *)(pbVar11 + -4), iVar1 != 1)) {
            if (param_2 == 0) goto LAB_02375fa4;
            uVar10 = *(undefined8 *)(pbVar11 + -0xc);
            System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                      (param_2,uVar10,&plStack_70,*(undefined8 *)puVar4);
            if ((plStack_70 == (long *)0x0) ||
               ((*plStack_70 == *(long *)(puVar2 + 0x90) && ((int)plStack_70[2] == 0)))) {
              if (iVar1 == 0) {
                uVar8 = *(undefined8 *)PTR_DAT_04ca9b60;
              }
              else {
                uStack_80 = 0;
                uVar8 = FUN_02133100(*(undefined8 *)(puVar2 + 0x80),&uStack_80);
              }
              System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                        (param_2,uVar10,uVar8,*(undefined8 *)puVar3);
            }
          }
          uVar9 = (ulong)*(uint *)(lVar6 + 0x18);
          uVar7 = uVar7 + 1;
          pbVar11 = pbVar11 + 0x18;
        } while ((long)uVar7 < (long)(int)*(uint *)(lVar6 + 0x18));
      }
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar10 = Dino_BusSand_App_Meta_TrackingPlan__Validate_227557c(param_1,param_2,&uStack_78);
    }
    return uVar10;
  }
LAB_02375fa4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

