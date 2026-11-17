/* IL2CPP: Dino.Tracking.DinoEventTracking$$SetSessionParam
void Dino_Tracking_DinoEventTracking__SetSessionParam (System_String_o* key, System_Nullable_DinoTrackingParameter__o parameter, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.DinoEventTracking$$SetSessionParam
   void Dino_Tracking_DinoEventTracking__SetSessionParam (System_String_o* key,
   System_Nullable_DinoTrackingParameter__o parameter, const MethodInfo* method); */

void Dino_Tracking_DinoEventTracking__SetSessionParam_247c2f8(undefined8 param_1,char *param_2)

{
  ulong uVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000004f9cf4b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc18d8);
    FUN_02132f7c(PTR_DAT_04cc1bc8);
    FUN_02132f7c(PTR_DAT_04cc1bd0);
    bRam0000000004f9cf4b = 1;
  }
  uVar1 = Dino_Tracking_CustomParameterValue__ValidateKey_2476d80(param_1);
  if (((uVar1 & 1) != 0) && (*param_2 != '\0')) {
    System_Nullable_DinoTrackingParameter___get_Value_2bca790
              (&uStack_50,param_2,*(undefined8 *)PTR_DAT_04cc1bd0);
    if (*(int *)(*(long *)PTR_DAT_04cc18d8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uStack_78 = uStack_48;
    uStack_80 = uStack_50;
    uStack_68 = uStack_38;
    uStack_70 = uStack_40;
    uStack_58 = uStack_28;
    uStack_60 = uStack_30;
    Dino_Tracking_CustomTrackingParameters__SetSessionParam_2477220(param_1,&uStack_80);
  }
  return;
}

