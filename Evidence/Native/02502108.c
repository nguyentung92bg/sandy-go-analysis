/* IL2CPP: Dino.BusSand.View.WorldView$$Create
Dino_BusSand_View_WorldView_o* Dino_BusSand_View_WorldView__Create (UnityEngine_Transform_o* parent, Dino_BusSand_View_StageLayout_o* layout, System_Collections_Generic_List_Color__o* hopperColors, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.WorldView$$Create
   Dino_BusSand_View_WorldView_o* Dino_BusSand_View_WorldView__Create (UnityEngine_Transform_o*
   parent, Dino_BusSand_View_StageLayout_o* layout, System_Collections_Generic_List_Color__o*
   hopperColors, const MethodInfo* method); */

long Dino_BusSand_View_WorldView__Create_2402108
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR_DAT_04cbe098;
  puVar1 = PTR_DAT_04caa070;
  if ((bRam0000000004f9cb0e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbe0a0);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cbe098);
    bRam0000000004f9cb0e = 1;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  UnityEngine_GameObject___ctor_43c20cc(lVar3,*(undefined8 *)puVar2,0);
  if ((lVar3 != 0) &&
     (lVar4 = UnityEngine_GameObject__get_transform_43c1048(lVar3,0), puVar1 = PTR_DAT_04cbe0a0,
     lVar4 != 0)) {
    UnityEngine_Transform__SetParent_43d1e34(lVar4,param_1,0,0);
    lVar3 = UnityEngine_GameObject__AddComponent_object__275a54c(lVar3,*(undefined8 *)puVar1);
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x20) = param_2;
      thunk_FUN_02134474((undefined8 *)(lVar3 + 0x20),param_2);
      *(undefined8 *)(lVar3 + 0x48) = param_3;
      thunk_FUN_02134474((undefined8 *)(lVar3 + 0x48),param_3);
      Dino_BusSand_View_WorldView__Build_2402204(lVar3);
      return lVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

