/* IL2CPP: Dino.BusSand.View.PackVehicle$$Create
Dino_BusSand_View_PackVehicle_o* Dino_BusSand_View_PackVehicle__Create (UnityEngine_Transform_o* parent, int32_t kind, uint8_t color, bool roofOff, float fill, bool arrow, float scale, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.PackVehicle$$Create
   Dino_BusSand_View_PackVehicle_o* Dino_BusSand_View_PackVehicle__Create (UnityEngine_Transform_o*
   parent, int32_t kind, uint8_t color, bool roofOff, float fill, bool arrow, float scale, const
   MethodInfo* method); */

long Dino_BusSand_View_PackVehicle__Create_23d7220
               (undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,uint param_6,uint param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  if ((bRam0000000004f9ca2b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbd2d8);
    FUN_02132f7c(PTR_DAT_04cbd7a8);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cbd7b0);
    bRam0000000004f9ca2b = 1;
  }
  uVar3 = Dino_BusSand_View_ArtPack__get_Active_238dea0(0);
  puVar2 = PTR_DAT_04cbd7b0;
  puVar1 = PTR_DAT_04caa070;
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  uStack_68 = *(undefined8 *)PTR_DAT_04cbd2d8;
  uStack_60 = 0xffffffffffffffff;
  uStack_58 = param_4;
  uVar4 = System_Enum__ToString_4863070(&uStack_68,0);
  uVar4 = System_String__Concat_46c82e0(*(undefined8 *)puVar2,uVar4,0);
  lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  UnityEngine_GameObject___ctor_43c20cc(lVar5,uVar4,0);
  if ((lVar5 != 0) && (lVar6 = UnityEngine_GameObject__get_transform_43c1048(lVar5,0), lVar6 != 0))
  {
    UnityEngine_Transform__SetParent_43d1e34(lVar6,param_3,0,0);
    lVar5 = UnityEngine_GameObject__AddComponent_object__275a54c
                      (lVar5,*(undefined8 *)PTR_DAT_04cbd7a8);
    if (lVar5 != 0) {
      Dino_BusSand_View_PackVehicle__Build_23d7394
                (param_1,param_2,lVar5,param_4,param_5,param_6 & 1,param_7 & 1);
      return lVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

