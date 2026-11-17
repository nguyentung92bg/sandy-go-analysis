/* IL2CPP: Dino.BusSand.View.GarageView$$Create
Dino_BusSand_View_GarageView_o* Dino_BusSand_View_GarageView__Create (UnityEngine_Transform_o* parent, Dino_BusSand_Core_Garage_o* g, Dino_BusSand_View_StageLayout_o* layout, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GarageView$$Create
   Dino_BusSand_View_GarageView_o* Dino_BusSand_View_GarageView__Create (UnityEngine_Transform_o*
   parent, Dino_BusSand_Core_Garage_o* g, Dino_BusSand_View_StageLayout_o* layout, const MethodInfo*
   method); */

long Dino_BusSand_View_GarageView__Create_23afd44
               (undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if ((bRam0000000004f9c96b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc7e8);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cbc7f0);
    bRam0000000004f9c96b = 1;
  }
  puVar2 = PTR_DAT_04cbc7f0;
  puVar1 = PTR_DAT_04caa070;
  if (param_2 != 0) {
    uVar3 = System_Int32__ToString_482d750(param_2 + 0x10,0);
    uVar3 = System_String__Concat_46c82e0(*(undefined8 *)puVar2,uVar3,0);
    lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
    UnityEngine_GameObject___ctor_43c20cc(lVar4,uVar3,0);
    if ((lVar4 != 0) &&
       (lVar5 = UnityEngine_GameObject__get_transform_43c1048(lVar4,0), puVar1 = PTR_DAT_04cbc7e8,
       lVar5 != 0)) {
      UnityEngine_Transform__SetParent_43d1e34(lVar5,param_1,0,0);
      lVar4 = UnityEngine_GameObject__AddComponent_object__275a54c(lVar4,*(undefined8 *)puVar1);
      if (lVar4 != 0) {
        Dino_BusSand_View_GarageView__Build_23afe4c(lVar4,param_2,param_3);
        return lVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

