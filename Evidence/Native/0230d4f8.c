/* IL2CPP: Dino.BusSand.App.Meta.RewardList$$Times
System_Collections_Generic_List_KeyValuePair_int__long___o* Dino_BusSand_App_Meta_RewardList__Times (System_Collections_Generic_List_KeyValuePair_int__long___o* list, int32_t times, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RewardList$$Times
   System_Collections_Generic_List_KeyValuePair_int__long___o*
   Dino_BusSand_App_Meta_RewardList__Times
   (System_Collections_Generic_List_KeyValuePair_int__long___o* list, int32_t times, const
   MethodInfo* method); */

long Dino_BusSand_App_Meta_RewardList__Times_220d4f8(long param_1,int param_2)

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
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  long lStack_48;
  
  puVar3 = PTR_DAT_04caca60;
  puVar2 = PTR_DAT_04caca50;
  if ((bRam0000000004f9bd16 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caece0);
    FUN_02132f7c(PTR_DAT_04caece8);
    FUN_02132f7c(PTR_DAT_04caecf0);
    FUN_02132f7c(PTR_DAT_04cae910);
    FUN_02132f7c(PTR_DAT_04cadd90);
    FUN_02132f7c(PTR_DAT_04cadd98);
    FUN_02132f7c(PTR_DAT_04cae058);
    FUN_02132f7c(PTR_DAT_04caed00);
    FUN_02132f7c(PTR_DAT_04caca50);
    FUN_02132f7c(PTR_DAT_04caca60);
    bRam0000000004f9bd16 = 1;
  }
  uStack_58 = 0;
  uStack_60 = 0;
  lStack_48 = 0;
  uStack_50 = 0;
  lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_List_KeyValuePair_int__long_____ctor_3964fac
            (lVar6,*(undefined8 *)puVar2);
  puVar5 = PTR_DAT_04caece8;
  puVar4 = PTR_DAT_04caece0;
  puVar3 = PTR_DAT_04cae910;
  puVar2 = PTR_DAT_04cae058;
  if (param_1 != 0) {
    System_Collections_Generic_List_KeyValuePair_int__long____GetEnumerator_3966258
              (&uStack_60,param_1,*(undefined8 *)PTR_DAT_04caed00);
    uStack_70 = 0;
    puStack_68 = &uStack_60;
    while (uVar7 = System_Collections_Generic_List_Enumerator_KeyValuePair_int__long____MoveNext_35b53dc
                             (&uStack_60,*(undefined8 *)puVar5), (uVar7 & 1) != 0) {
      uStack_80 = 0;
      uStack_78 = 0;
      System_Collections_Generic_KeyValuePair_int__long____ctor_390da2c
                (&uStack_80,uStack_50 & 0xffffffff,lStack_48 * param_2,*(undefined8 *)puVar3);
      if (lVar6 == 0) {
LAB_0230d6c4:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar8 = *(long *)(lVar6 + 0x10);
      lVar9 = *(long *)puVar2;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar8 == 0) goto LAB_0230d6c4;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        lVar8 = lVar8 + (long)(int)uVar1 * 0x10;
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar8 + 0x20) = uStack_80;
        *(undefined8 *)(lVar8 + 0x28) = uStack_78;
      }
      else {
        System_Collections_Generic_List_KeyValuePair_int__long____AddWithResize_3965844
                  (lVar6,uStack_80,uStack_78,
                   *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
    }
    System_Collections_Generic_List_Enumerator_KeyValuePair_int__long____Dispose_35b53d8
              (&uStack_60,*(undefined8 *)puVar4);
  }
                    /* catch() { ... } // from try @ 0230c95c with catch @ 0230d6b4 */
  return lVar6;
}

