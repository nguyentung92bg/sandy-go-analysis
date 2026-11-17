/* IL2CPP: Dino.BusSand.View.VehicleView$$Create
Dino_BusSand_View_VehicleView_o* Dino_BusSand_View_VehicleView__Create (UnityEngine_Transform_o* parent, int32_t id, int32_t kind, uint8_t color, bool hidden, float yardCell, float roadCell, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.VehicleView$$Create
   Dino_BusSand_View_VehicleView_o* Dino_BusSand_View_VehicleView__Create (UnityEngine_Transform_o*
   parent, int32_t id, int32_t kind, uint8_t color, bool hidden, float yardCell, float roadCell,
   const MethodInfo* method); */

long Dino_BusSand_View_VehicleView__Create_23f3b48
               (undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,uint param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  puVar3 = PTR_DAT_04cbdea8;
  puVar2 = PTR_DAT_04cbd2d8;
  puVar1 = PTR_DAT_04caa070;
  if ((bRam0000000004f9cac4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbd2d8);
    FUN_02132f7c(PTR_DAT_04cbdeb0);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cbdea8);
    bRam0000000004f9cac4 = 1;
  }
  uStack_64 = param_4;
  uVar4 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_64);
  uStack_68 = param_5;
  uVar5 = FUN_02133100(*(undefined8 *)puVar2,&uStack_68);
  uVar4 = System_String__Format_46d34e8(*(undefined8 *)puVar3,uVar4,uVar5,0);
  lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  UnityEngine_GameObject___ctor_43c20cc(lVar6,uVar4,0);
  if ((lVar6 != 0) &&
     (lVar7 = UnityEngine_GameObject__get_transform_43c1048(lVar6,0), puVar1 = PTR_DAT_04cbdeb0,
     lVar7 != 0)) {
    UnityEngine_Transform__SetParent_43d1e34(lVar7,param_3,0,0);
    lVar6 = UnityEngine_GameObject__AddComponent_object__275a54c(lVar6,*(undefined8 *)puVar1);
    if (lVar6 != 0) {
      Dino_BusSand_View_VehicleView__Build_23f3cc4
                (param_1,param_2,lVar6,param_4,param_5,param_6,param_7 & 1);
      return lVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

