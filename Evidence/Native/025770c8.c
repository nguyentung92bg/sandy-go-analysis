/* IL2CPP: Dino.Tracking.CustomParameterValue$$Create
System_Nullable_DinoTrackingParameter__o Dino_Tracking_CustomParameterValue__Create (System_String_o* key, double value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.CustomParameterValue$$Create
   System_Nullable_DinoTrackingParameter__o Dino_Tracking_CustomParameterValue__Create
   (System_String_o* key, double value, const MethodInfo* method); */

void Dino_Tracking_CustomParameterValue__Create_24770c8
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_90;
  undefined8 uStack_88;
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
  
  puVar1 = PTR_DAT_04cc18c0;
  if ((bRam0000000004f9ced2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc18c0);
    bRam0000000004f9ced2 = 1;
  }
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  Dino_Common_DinoTrackingParameter___ctor_24475ac(param_2,&uStack_90,param_3,0);
  uVar2 = *(undefined8 *)puVar1;
  param_1[6] = 0;
  uStack_38 = uStack_68;
  uStack_40 = uStack_70;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
                    /* try { // try from 02577158 to 02677273 has its CatchHandler @ 02577158
                       catch() { ... } // from try @ 02577158 with catch @ 02577158
                       catch() { ... } // from try @ 0257732c with catch @ 02577158
                       catch() { ... } // from try @ 025777e4 with catch @ 02577158
                       catch() { ... } // from try @ 025777ec with catch @ 02577158
                       catch() { ... } // from try @ 02577834 with catch @ 02577158
                       catch() { ... } // from try @ 02577858 with catch @ 02577158 */
  uStack_58 = uStack_88;
  uStack_60 = uStack_90;
  uStack_48 = uStack_78;
  uStack_50 = uStack_80;
  System_Nullable_DinoTrackingParameter____ctor_2bca750(param_1,&uStack_60,uVar2);
  return;
}

