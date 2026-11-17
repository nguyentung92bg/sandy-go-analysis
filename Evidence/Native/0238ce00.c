/* IL2CPP: Dino.BusSand.App.UI.UiKit$$Rays
UnityEngine_RectTransform_o* Dino_BusSand_App_UI_UiKit__Rays (UnityEngine_Transform_o* parent, float size, UnityEngine_Vector2_o pos, float alpha, float speed, System_Nullable_Color__o tint, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.UiKit$$Rays
   UnityEngine_RectTransform_o* Dino_BusSand_App_UI_UiKit__Rays (UnityEngine_Transform_o* parent,
   float size, UnityEngine_Vector2_o pos, float alpha, float speed, System_Nullable_Color__o tint,
   const MethodInfo* method); */

undefined8
Dino_BusSand_App_UI_UiKit__Rays_228ce00
          (float param_1,undefined4 param_2,undefined4 param_3,float param_4,undefined4 param_5,
          undefined8 param_6,char *param_7)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  
  puVar2 = PTR_DAT_04cad330;
  if ((bRam0000000004f9c197 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5228);
    FUN_02132f7c(PTR_DAT_04cb4e10);
    FUN_02132f7c(PTR_DAT_04cb4df8);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04caf2c0);
    FUN_02132f7c(PTR_DAT_04cb5230);
    FUN_02132f7c(PTR_DAT_04caf300);
    FUN_02132f7c(PTR_DAT_04cb5238);
    FUN_02132f7c(PTR_DAT_04cb5240);
    bRam0000000004f9c197 = 1;
  }
  puVar3 = PTR_DAT_04cb5238;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                    (param_1,param_1,param_2,param_3,param_6,*(undefined8 *)puVar3,0,0);
  puVar4 = PTR_DAT_04caf300;
  puVar3 = PTR_DAT_04caf2c0;
  if (*param_7 == '\0') {
    uVar9 = 0x3f800000;
    uVar11 = 0x3f800000;
    uVar10 = _UNK_00e2038c;
  }
  else {
    uVar9 = *(undefined4 *)(param_7 + 8);
    uVar11 = *(undefined4 *)(param_7 + 4);
    uVar10 = *(undefined4 *)(param_7 + 0xc);
  }
  fVar12 = param_1 * _UNK_00e200f8;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar6 = (long *)Dino_BusSand_App_UI_UiKit__Img_228203c
                             (fVar12,fVar12,0,0,0x3f800000,uVar5,*(undefined8 *)puVar4,
                              *(undefined8 *)puVar3,0);
  puVar3 = PTR_DAT_04cb5240;
  puVar2 = PTR_DAT_04cb5230;
  if (plVar6 != (long *)0x0) {
    fVar8 = param_4 * _UNK_00e20178;
    fVar12 = 1.0;
    if (fVar8 <= 1.0) {
      fVar12 = fVar8;
    }
    fVar1 = 0.0;
    if (0.0 <= fVar8) {
      fVar1 = fVar12;
    }
    (**(code **)(*plVar6 + 0x2a8))
              (uVar11,uVar9,uVar10,fVar1,plVar6,*(undefined8 *)(*plVar6 + 0x2b0));
    plVar6 = (long *)Dino_BusSand_App_UI_UiKit__Img_228203c
                               (param_1,param_1,0,0,0x3f800000,uVar5,*(undefined8 *)puVar3,
                                *(undefined8 *)puVar2,0);
    if (plVar6 != (long *)0x0) {
      param_4 = param_4 * _UNK_00e20838;
      fVar12 = 1.0;
      if (param_4 <= 1.0) {
        fVar12 = param_4;
      }
      fVar8 = 0.0;
      if (0.0 <= param_4) {
        fVar8 = fVar12;
      }
      (**(code **)(*plVar6 + 0x2a8))
                (uVar11,uVar9,uVar10,fVar8,plVar6,*(undefined8 *)(*plVar6 + 0x2b0));
      lVar7 = UnityEngine_Component__get_gameObject_43bcde8(plVar6,0);
      if ((lVar7 != 0) &&
         (lVar7 = UnityEngine_GameObject__AddComponent_object__275a54c
                            (lVar7,*(undefined8 *)PTR_DAT_04cb5228), lVar7 != 0)) {
        *(undefined4 *)(lVar7 + 0x20) = param_5;
        return uVar5;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

