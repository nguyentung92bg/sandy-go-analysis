/* IL2CPP: Dino.BusSand.View.PropKit$$get_LaneRail
UnityEngine_Mesh_o* Dino_BusSand_View_PropKit__get_LaneRail (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.PropKit$$get_LaneRail
   UnityEngine_Mesh_o* Dino_BusSand_View_PropKit__get_LaneRail (const MethodInfo* method); */

undefined8 Dino_BusSand_View_PropKit__get_LaneRail_23dddbc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  
  puVar1 = PTR_DAT_04cbd8d8;
  if ((bRam0000000004f9ca55 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbd8e0);
    FUN_02132f7c(PTR_DAT_04cbd088);
    FUN_02132f7c(PTR_DAT_04cbd970);
    FUN_02132f7c(PTR_DAT_04cbd8d8);
    FUN_02132f7c(PTR_DAT_04cbd978);
    bRam0000000004f9ca55 = 1;
  }
  puVar3 = PTR_DAT_04cbd978;
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar1;
  }
  puVar2 = PTR_DAT_04cbd088;
  puVar7 = *(undefined8 **)(lVar5 + 0xb8);
  lVar9 = puVar7[7];
  uVar8 = *(undefined8 *)puVar3;
  if (lVar9 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar10 = *puVar7;
    lVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbd8e0);
    System_Action_object____ctor_35f0008(lVar9,uVar10,*(undefined8 *)PTR_DAT_04cbd970,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x38);
    *plVar6 = lVar9;
    thunk_FUN_02134474(plVar6,lVar9);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04cbd088;
  if ((bRam0000000004f9ca49 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbb7f8);
    FUN_02132f7c(PTR_DAT_04cbd8d0);
    FUN_02132f7c(PTR_DAT_04cbd160);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbd088);
    bRam0000000004f9ca49 = 1;
  }
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar1;
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xa8);
  if (lVar5 != 0) {
    uVar4 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                      (lVar5,uVar8,&stack0xffffffffffffffd8,*(undefined8 *)PTR_DAT_04cbb7f8);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar4 = UnityEngine_Object__op_Inequality_43c8dec(0,0,0);
      if ((uVar4 & 1) != 0) {
        return 0;
      }
    }
    lVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbd160);
    Dino_BusSand_View_PropKit_MeshBuilder___ctor_23dce3c();
    if ((lVar9 != 0) &&
       ((**(code **)(lVar9 + 0x18))
                  (*(undefined8 *)(lVar9 + 0x40),lVar5,*(undefined8 *)(lVar9 + 0x28)), lVar5 != 0))
    {
      uVar10 = Dino_BusSand_View_PropKit_MeshBuilder__ToMesh_23dcfe4(lVar5,uVar8);
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar5);
        lVar5 = *(long *)puVar1;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xa8);
      if (lVar5 != 0) {
        System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                  (lVar5,uVar8,uVar10,*(undefined8 *)PTR_DAT_04cbd8d0);
        return uVar10;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

