/* IL2CPP: Dino.BusSand.App.UI.PassportUi$$FlyList
System_Collections_Generic_List_KeyValuePair_int__long___o* Dino_BusSand_App_UI_PassportUi__FlyList (System_Collections_Generic_List_PassportFeature_Reward__o* rewards, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportUi$$FlyList
   System_Collections_Generic_List_KeyValuePair_int__long___o*
   Dino_BusSand_App_UI_PassportUi__FlyList
   (System_Collections_Generic_List_PassportFeature_Reward__o* rewards, const MethodInfo* method);
    */

long Dino_BusSand_App_UI_PassportUi__FlyList_21d8358(long param_1)

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
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  long lStack_58;
  ulong uStack_50;
  
  puVar3 = PTR_DAT_04caca60;
  puVar2 = PTR_DAT_04caca50;
  if ((bRam0000000004f9bb8e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf638);
    FUN_02132f7c(PTR_DAT_04caf640);
    FUN_02132f7c(PTR_DAT_04caf648);
    FUN_02132f7c(PTR_DAT_04cae910);
    FUN_02132f7c(PTR_DAT_04cae058);
    FUN_02132f7c(PTR_DAT_04caf650);
    FUN_02132f7c(PTR_DAT_04caca50);
    FUN_02132f7c(PTR_DAT_04caca60);
    bRam0000000004f9bb8e = 1;
  }
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  lStack_58 = 0;
  uStack_60 = 0;
  lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_List_KeyValuePair_int__long_____ctor_3964fac
            (lVar6,*(undefined8 *)puVar2);
  puVar5 = PTR_DAT_04caf640;
  puVar4 = PTR_DAT_04caf638;
  puVar3 = PTR_DAT_04cae910;
  puVar2 = PTR_DAT_04cae058;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* try { // try from 022d8438 to 023d852b has its CatchHandler @ 022d85ec */
  System_Collections_Generic_List_PassportFeature_Reward___GetEnumerator_3b58f1c
            (&uStack_70,param_1,*(undefined8 *)PTR_DAT_04caf650);
  uStack_80 = 0;
  puStack_78 = &uStack_70;
  while( true ) {
    do {
      uVar7 = System_Collections_Generic_List_Enumerator_PassportFeature_Reward___MoveNext_3613ea8
                        (&uStack_70,*(undefined8 *)puVar5);
      if ((uVar7 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_PassportFeature_Reward___Dispose_3613ea4
                  (&uStack_70,*(undefined8 *)puVar4);
        return lVar6;
      }
    } while (((int)uStack_60 < 1) || (lStack_58 < 1));
    uStack_90 = 0;
    uStack_88 = 0;
    lVar8 = lStack_58;
    if ((uStack_50 & 1) != 0) {
      lVar8 = 1;
    }
    System_Collections_Generic_KeyValuePair_int__long____ctor_390da2c
              (&uStack_90,uStack_60 & 0xffffffff,lVar8,*(undefined8 *)puVar3);
    if (lVar6 == 0) break;
    lVar8 = *(long *)(lVar6 + 0x10);
    lVar9 = *(long *)puVar2;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (lVar8 == 0) break;
    uVar1 = *(uint *)(lVar6 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      lVar8 = lVar8 + (long)(int)uVar1 * 0x10;
      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar8 + 0x20) = uStack_90;
      *(undefined8 *)(lVar8 + 0x28) = uStack_88;
    }
    else {
      System_Collections_Generic_List_KeyValuePair_int__long____AddWithResize_3965844
                (lVar6,uStack_90,uStack_88,
                 *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

