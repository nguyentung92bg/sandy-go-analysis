/* IL2CPP: Dino.Tracking.CustomTrackingParameters$$SetSessionParam
void Dino_Tracking_CustomTrackingParameters__SetSessionParam (System_String_o* key, Dino_Common_DinoTrackingParameter_o parameter, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.CustomTrackingParameters$$SetSessionParam
   void Dino_Tracking_CustomTrackingParameters__SetSessionParam (System_String_o* key,
   Dino_Common_DinoTrackingParameter_o parameter, const MethodInfo* method); */

void Dino_Tracking_CustomTrackingParameters__SetSessionParam_2477220
               (undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_04cc18d8;
  if ((bRam0000000004f9ced4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc18d8);
    bRam0000000004f9ced4 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
                    /* try { // try from 02577274 to 0267727b has its CatchHandler @ 02577814 */
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
                    /* try { // try from 02577288 to 0267728f has its CatchHandler @ 02577810 */
  Dino_Tracking_CustomParameterList__Set_2476938(**(undefined8 **)(lVar2 + 0xb8),param_1,&uStack_60)
  ;
  return;
}

