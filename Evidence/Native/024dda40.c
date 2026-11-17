/* IL2CPP: Dino.BusSand.View.PropKit$$Gate
UnityEngine_Mesh_o* Dino_BusSand_View_PropKit__Gate (UnityEngine_Color_o c, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.PropKit$$Gate
   UnityEngine_Mesh_o* Dino_BusSand_View_PropKit__Gate (UnityEngine_Color_o c, const MethodInfo*
   method); */

undefined8
Dino_BusSand_View_PropKit__Gate_23dda40
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  puVar1 = PTR_DAT_04cbd940;
  if ((bRam0000000004f9ca52 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbd8e0);
    FUN_02132f7c(PTR_DAT_04cbd088);
    FUN_02132f7c(PTR_DAT_04cbd948);
    FUN_02132f7c(PTR_DAT_04cbd940);
    FUN_02132f7c(PTR_DAT_04cb1900);
    bRam0000000004f9ca52 = 1;
  }
  lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar7,0);
  puVar3 = PTR_DAT_04cbd8e0;
  puVar1 = PTR_DAT_04cb1900;
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  *(undefined4 *)(lVar7 + 0x10) = param_1;
  puVar4 = PTR_DAT_04cbd948;
  *(undefined4 *)(lVar7 + 0x14) = param_2;
  puVar2 = PTR_DAT_04cbd088;
  *(undefined4 *)(lVar7 + 0x18) = param_3;
  *(undefined4 *)(lVar7 + 0x1c) = param_4;
  uVar8 = UnityEngine_ColorUtility__ToHtmlStringRGB_43aaee4(param_1,param_2,param_3,param_4,0);
  uVar8 = System_String__Concat_46c82e0(*(undefined8 *)puVar1,uVar8,0);
  lVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Action_object____ctor_35f0008(lVar9,lVar7,*(undefined8 *)puVar4,0);
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
  lVar7 = *(long *)puVar1;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar1;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0xa8);
  if (lVar7 != 0) {
    uVar5 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                      (lVar7,uVar8,&stack0xffffffffffffffd8,*(undefined8 *)PTR_DAT_04cbb7f8);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = UnityEngine_Object__op_Inequality_43c8dec(0,0,0);
      if ((uVar5 & 1) != 0) {
        return 0;
      }
    }
    lVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbd160);
    Dino_BusSand_View_PropKit_MeshBuilder___ctor_23dce3c();
    if ((lVar9 != 0) &&
       ((**(code **)(lVar9 + 0x18))
                  (*(undefined8 *)(lVar9 + 0x40),lVar7,*(undefined8 *)(lVar9 + 0x28)), lVar7 != 0))
    {
      uVar6 = Dino_BusSand_View_PropKit_MeshBuilder__ToMesh_23dcfe4(lVar7,uVar8);
      lVar7 = *(long *)puVar1;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar7);
        lVar7 = *(long *)puVar1;
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0xa8);
      if (lVar7 != 0) {
        System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                  (lVar7,uVar8,uVar6,*(undefined8 *)PTR_DAT_04cbd8d0);
        return uVar6;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

