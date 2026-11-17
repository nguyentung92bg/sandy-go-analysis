/* IL2CPP: Dino.BusSand.App.UI.BusStreakUi$$Rate
void Dino_BusSand_App_UI_BusStreakUi__Rate (UnityEngine_UI_Image_o* card, System_String_o* name, int32_t type, System_String_o* preset, UnityEngine_Vector2_o art, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.BusStreakUi$$Rate
   void Dino_BusSand_App_UI_BusStreakUi__Rate (UnityEngine_UI_Image_o* card, System_String_o* name,
   int32_t type, System_String_o* preset, UnityEngine_Vector2_o art, const MethodInfo* method); */

void Dino_BusSand_App_UI_BusStreakUi__Rate_21b45a8
               (float param_1,float param_2,long param_3,undefined8 param_4,undefined4 param_5,
               undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_44;
  
  if ((bRam0000000004f9ba9d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf220);
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cabb10);
    bRam0000000004f9ba9d = 1;
  }
  puVar4 = PTR_DAT_04caf220;
  puVar3 = PTR_DAT_04cad330;
  puVar2 = PTR_DAT_04cac878;
  puVar1 = PTR_DAT_04cabb10;
  uStack_44 = 0;
  if (param_3 != 0) {
    uVar5 = UnityEngine_Component__get_transform_43bcd18(param_3,0);
    uStack_44 = Dino_BusSand_App_Meta_StreakRateFeature__StreakRateByLevelType_224c2e0(param_5,0);
    uVar6 = System_Int32__ToString_482d750(&uStack_44,0);
    uVar6 = System_String__Concat_46c82e0(*(undefined8 *)puVar1,uVar6,0);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    System_Nullable_Color____ctor_2bc9090
              (0x3f800000,0x3f800000,0x3f800000,0x3f800000,&uStack_78,*(undefined8 *)puVar2);
    lVar7 = *(long *)puVar4;
    fVar9 = param_1 + _UNK_00e20600;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac(CONCAT44(119.5 - param_2,119.5 - param_1));
      lVar7 = *(long *)puVar4;
    }
    uVar8 = **(undefined8 **)(lVar7 + 0xb8);
    fVar10 = (119.5 - param_2) * 0.96 + (float)((ulong)uVar8 >> 0x20) * 0.96;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uStack_80 = uStack_68;
    uStack_88 = uStack_70;
    uStack_90 = uStack_78;
    lVar7 = Dino_BusSand_App_UI_UiKit__Text_2282314
                      (_UNK_00e1fe40,_UNK_00e20af0,_UNK_00e20848,
                       CONCAT44(fVar10,fVar9 * 0.96 + (float)uVar8 * 0.96),fVar10,uVar5,param_4,
                       uVar6,param_6,&uStack_90,0x202,0);
    if (lVar7 != 0) {
      TMPro_TMP_Text__set_textWrappingMode_42cc8a8(lVar7,0,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

