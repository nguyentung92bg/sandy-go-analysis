/* IL2CPP: Dino.BusSand.App.UI.CommerceUi$$Pairs
System_Collections_Generic_List_KeyValuePair_int__long___o* Dino_BusSand_App_UI_CommerceUi__Pairs (System_Collections_Generic_Dictionary_string__object__o* obj, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommerceUi$$Pairs
   System_Collections_Generic_List_KeyValuePair_int__long___o* Dino_BusSand_App_UI_CommerceUi__Pairs
   (System_Collections_Generic_Dictionary_string__object__o* obj, const MethodInfo* method); */

long Dino_BusSand_App_UI_CommerceUi__Pairs_22ab4ac(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar3 = PTR_DAT_04caca60;
  puVar2 = PTR_DAT_04caca50;
  if ((bRam0000000004f9c2a4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa2f0);
    FUN_02132f7c(PTR_DAT_04caa2f8);
    FUN_02132f7c(PTR_DAT_04caa300);
    FUN_02132f7c(PTR_DAT_04caa308);
    FUN_02132f7c(PTR_DAT_04cae910);
    FUN_02132f7c(PTR_DAT_04caa310);
    FUN_02132f7c(PTR_DAT_04caa318);
    FUN_02132f7c(PTR_DAT_04cae058);
    FUN_02132f7c(PTR_DAT_04caca50);
    FUN_02132f7c(PTR_DAT_04caca60);
    bRam0000000004f9c2a4 = 1;
  }
  uStack_50 = 0;
  uStack_74 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_List_KeyValuePair_int__long_____ctor_3964fac
            (lVar7,*(undefined8 *)puVar2);
  puVar5 = PTR_DAT_04cae910;
  puVar4 = PTR_DAT_04cae058;
  puVar3 = PTR_DAT_04caa300;
  puVar2 = PTR_DAT_04caa2f8;
  if (param_1 != 0) {
    System_Collections_Generic_Dictionary_object__object___GetEnumerator_34b47d8
              (&uStack_a0,param_1,*(undefined8 *)PTR_DAT_04caa2f0);
    uStack_50 = uStack_80;
    uStack_68 = puStack_98;
    uStack_70 = uStack_a0;
    uStack_58 = uStack_88;
    uStack_60 = uStack_90;
    uStack_a0 = 0;
    puStack_98 = &uStack_70;
LAB_023ab5d8:
    uVar8 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext_3645d38
                      (&uStack_70,*(undefined8 *)puVar3);
    uVar9 = uStack_58;
    if ((uVar8 & 1) != 0) {
      uVar8 = System_Int32__TryParse_482de64(uStack_60,&uStack_74,0);
      uVar6 = uStack_74;
      if ((uVar8 & 1) != 0) {
        uVar9 = Dino_BusSand_App_MiniJson__Long_2156378(uVar9,0,0);
        uStack_b0 = 0;
        uStack_a8 = 0;
        System_Collections_Generic_KeyValuePair_int__long____ctor_390da2c
                  (&uStack_b0,uVar6,uVar9,*(undefined8 *)puVar5);
        if (lVar7 != 0) {
          lVar10 = *(long *)(lVar7 + 0x10);
          lVar11 = *(long *)puVar4;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar10 != 0) {
            uVar1 = *(uint *)(lVar7 + 0x18);
            if (uVar1 < *(uint *)(lVar10 + 0x18)) {
              lVar10 = lVar10 + (long)(int)uVar1 * 0x10;
              *(uint *)(lVar7 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar10 + 0x20) = uStack_b0;
              *(undefined8 *)(lVar10 + 0x28) = uStack_a8;
            }
            else {
              System_Collections_Generic_List_KeyValuePair_int__long____AddWithResize_3965844
                        (lVar7,uStack_b0,uStack_a8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
            }
            goto LAB_023ab5d8;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      goto LAB_023ab5d8;
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose_3645e58
              (&uStack_70,*(undefined8 *)puVar2);
  }
  return lVar7;
}

