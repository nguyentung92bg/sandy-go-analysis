/* IL2CPP: Dino.BusSand.View.PropKit$$Cached
UnityEngine_Mesh_o* Dino_BusSand_View_PropKit__Cached (System_String_o* key, System_Action_PropKit_MeshBuilder__o* build, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.PropKit$$Cached
   UnityEngine_Mesh_o* Dino_BusSand_View_PropKit__Cached (System_String_o* key,
   System_Action_PropKit_MeshBuilder__o* build, const MethodInfo* method); */

undefined8 Dino_BusSand_View_PropKit__Cached_23dccc8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_04cbd088;
  if ((bRam0000000004f9ca49 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbb7f8);
    FUN_02132f7c(PTR_DAT_04cbd8d0);
    FUN_02132f7c(PTR_DAT_04cbd160);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbd088);
    bRam0000000004f9ca49 = 1;
  }
  lVar3 = *(long *)puVar1;
  uStack_28 = 0;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0xa8);
  if (lVar3 != 0) {
    uVar4 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                      (lVar3,param_1,&uStack_28,*(undefined8 *)PTR_DAT_04cbb7f8);
    uVar2 = uStack_28;
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar2,0,0);
      if ((uVar4 & 1) != 0) {
        return uStack_28;
      }
    }
    lVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbd160);
    Dino_BusSand_View_PropKit_MeshBuilder___ctor_23dce3c();
    if ((param_2 != 0) &&
       ((**(code **)(param_2 + 0x18))
                  (*(undefined8 *)(param_2 + 0x40),lVar3,*(undefined8 *)(param_2 + 0x28)),
       lVar3 != 0)) {
      uStack_28 = Dino_BusSand_View_PropKit_MeshBuilder__ToMesh_23dcfe4(lVar3,param_1);
      lVar3 = *(long *)puVar1;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar3);
        lVar3 = *(long *)puVar1;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0xa8);
      if (lVar3 != 0) {
        System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                  (lVar3,param_1,uStack_28,*(undefined8 *)PTR_DAT_04cbd8d0);
        return uStack_28;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

