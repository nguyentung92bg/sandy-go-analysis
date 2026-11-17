/* IL2CPP: Dino.BusSand.App.Meta.PlayerIdentity$$RandomName
System_String_o* Dino_BusSand_App_Meta_PlayerIdentity__RandomName (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PlayerIdentity$$RandomName
   System_String_o* Dino_BusSand_App_Meta_PlayerIdentity__RandomName (const MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_PlayerIdentity__RandomName_226e084(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  int iVar12;
  long lStack_38;
  
  puVar3 = PTR_DAT_04cae570;
  if ((bRam0000000004f9c0d7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4170);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04caba60);
    FUN_02132f7c(PTR_DAT_04cb4190);
    FUN_02132f7c(PTR_DAT_04cae570);
    FUN_02132f7c(PTR_DAT_04cac078);
    FUN_02132f7c(PTR_DAT_04cb41a8);
    bRam0000000004f9c0d7 = 1;
  }
  puVar1 = PTR_DAT_04cab550;
  lStack_38 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar5 = Dino_BusSand_App_Meta_PlayerIdentity__Names_226e794();
  lVar9 = *(long *)puVar1;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar9);
    lVar9 = *(long *)puVar1;
  }
  uVar6 = System_String__IsNullOrEmpty_46d2084(**(undefined8 **)(lVar9 + 0xb8),0);
  puVar2 = PTR_DAT_04cac078;
  puVar10 = (undefined8 *)PTR_DAT_04cac078;
  if ((uVar6 & 1) == 0) {
    lVar9 = *(long *)puVar1;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar9 = *(long *)puVar1;
    }
    puVar10 = *(undefined8 **)(lVar9 + 0xb8);
  }
  puVar1 = PTR_DAT_04cb4170;
  if (lVar5 == 0) goto LAB_0236e2fc;
  uVar6 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                    (lVar5,*puVar10,&lStack_38,*(undefined8 *)PTR_DAT_04cb4170);
  if ((uVar6 & 1) == 0) {
LAB_0236e1ac:
    System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
              (lVar5,*(undefined8 *)puVar2,&lStack_38,*(undefined8 *)puVar1);
    if (lStack_38 == 0) goto LAB_0236e208;
  }
  else {
    if (lStack_38 == 0) goto LAB_0236e2fc;
    if (*(int *)(lStack_38 + 0x18) == 0) goto LAB_0236e1ac;
  }
  if (*(int *)(lStack_38 + 0x18) == 0) {
LAB_0236e208:
    return *(undefined8 *)PTR_DAT_04cb41a8;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar5 = Dino_BusSand_App_Meta_PlayerIdentity__get_D_226be2c();
  if (lVar5 == 0) {
    uVar11 = 0;
  }
  else {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar5 = Dino_BusSand_App_Meta_PlayerIdentity__get_D_226be2c();
    if (lVar5 == 0) goto LAB_0236e2fc;
    uVar11 = *(undefined8 *)(lVar5 + 0x160);
  }
  lVar5 = lStack_38;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar7 = (long *)Dino_BusSand_App_Meta_PlayerIdentity__get_R_226bdb4();
  if (((lStack_38 != 0) && (plVar7 != (long *)0x0)) &&
     (uVar4 = (**(code **)(*plVar7 + 0x198))
                        (plVar7,0,*(undefined4 *)(lStack_38 + 0x18),*(undefined8 *)(*plVar7 + 0x1a0)
                        ), puVar1 = PTR_DAT_04cb4190, lVar5 != 0)) {
    uVar8 = System_Collections_Generic_List_object___get_Item_3a81924
                      (lVar5,uVar4,*(undefined8 *)PTR_DAT_04cb4190);
    iVar12 = 10;
    while( true ) {
      uVar6 = System_String__op_Equality_46d1108(uVar8,uVar11,0);
      lVar5 = lStack_38;
      if ((uVar6 & 1) == 0) {
        return uVar8;
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      plVar7 = (long *)Dino_BusSand_App_Meta_PlayerIdentity__get_R_226bdb4();
      if (((lStack_38 == 0) || (plVar7 == (long *)0x0)) ||
         (uVar4 = (**(code **)(*plVar7 + 0x198))
                            (plVar7,0,*(undefined4 *)(lStack_38 + 0x18),
                             *(undefined8 *)(*plVar7 + 0x1a0)), lVar5 == 0)) break;
      uVar8 = System_Collections_Generic_List_object___get_Item_3a81924
                        (lVar5,uVar4,*(undefined8 *)puVar1);
      iVar12 = iVar12 + -1;
      if (iVar12 == 0) {
        return uVar8;
      }
    }
  }
LAB_0236e2fc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

