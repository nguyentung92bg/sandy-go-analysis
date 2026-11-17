/* IL2CPP: Dino.BusSand.App.Meta.Ev07Rewards$$Pairs
System_Collections_Generic_List_KeyValuePair_int__long___o* Dino_BusSand_App_Meta_Ev07Rewards__Pairs (System_Collections_Generic_List_int____o* list, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Ev07Rewards$$Pairs
   System_Collections_Generic_List_KeyValuePair_int__long___o*
   Dino_BusSand_App_Meta_Ev07Rewards__Pairs (System_Collections_Generic_List_int____o* list, const
   MethodInfo* method); */

long Dino_BusSand_App_Meta_Ev07Rewards__Pairs_222ebe4(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar3 = PTR_DAT_04caca60;
  puVar2 = PTR_DAT_04caca50;
  if ((bRam0000000004f9be5c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2f18);
    FUN_02132f7c(PTR_DAT_04cb2f20);
    FUN_02132f7c(PTR_DAT_04cb2f28);
    FUN_02132f7c(PTR_DAT_04cae910);
    FUN_02132f7c(PTR_DAT_04cae058);
    FUN_02132f7c(PTR_DAT_04cb2f30);
    FUN_02132f7c(PTR_DAT_04caca50);
    FUN_02132f7c(PTR_DAT_04caca60);
    bRam0000000004f9be5c = 1;
  }
  uStack_58 = 0;
  uStack_50 = 0;
  lStack_48 = 0;
  lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_List_KeyValuePair_int__long_____ctor_3964fac
            (lVar6,*(undefined8 *)puVar2);
  puVar5 = PTR_DAT_04cb2f20;
  puVar4 = PTR_DAT_04cb2f18;
  puVar3 = PTR_DAT_04cae910;
  puVar2 = PTR_DAT_04cae058;
  if (param_1 != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_58,param_1,*(undefined8 *)PTR_DAT_04cb2f30);
    uStack_68 = 0;
    puStack_60 = &uStack_58;
LAB_0232ece0:
    uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                      (&uStack_58,*(undefined8 *)puVar5);
    if ((uVar7 & 1) != 0) {
      if ((lStack_48 != 0) && (1 < *(int *)(lStack_48 + 0x18))) {
        uStack_78 = 0;
        uStack_70 = 0;
        System_Collections_Generic_KeyValuePair_int__long____ctor_390da2c
                  (&uStack_78,*(undefined4 *)(lStack_48 + 0x20),(long)*(int *)(lStack_48 + 0x24),
                   *(undefined8 *)puVar3);
        if (lVar6 != 0) {
          lVar8 = *(long *)(lVar6 + 0x10);
          lVar9 = *(long *)puVar2;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar8 != 0) {
            uVar1 = *(uint *)(lVar6 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              lVar8 = lVar8 + (long)(int)uVar1 * 0x10;
              *(uint *)(lVar6 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar8 + 0x20) = uStack_78;
              *(undefined8 *)(lVar8 + 0x28) = uStack_70;
            }
            else {
              System_Collections_Generic_List_KeyValuePair_int__long____AddWithResize_3965844
                        (lVar6,uStack_78,uStack_70,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            }
            goto LAB_0232ece0;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      goto LAB_0232ece0;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_58,*(undefined8 *)puVar4);
  }
  return lVar6;
}

