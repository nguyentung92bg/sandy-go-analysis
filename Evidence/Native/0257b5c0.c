/* IL2CPP: Dino.Tracking.CustomParams$$Store
Dino_Tracking_CustomParams_o* Dino_Tracking_CustomParams__Store (Dino_Tracking_CustomParams_o* __this, System_String_o* key, System_Nullable_DinoTrackingParameter__o parameter, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.CustomParams$$Store
   Dino_Tracking_CustomParams_o* Dino_Tracking_CustomParams__Store (Dino_Tracking_CustomParams_o*
   __this, System_String_o* key, System_Nullable_DinoTrackingParameter__o parameter, const
   MethodInfo* method); */

long Dino_Tracking_CustomParams__Store_247b5c0(long param_1,undefined8 param_2,char *param_3)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
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
  
  if ((bRam0000000004f9cf3a & 1) == 0) {
                    /* try { // try from 0257b5ec to 0267b603 has its CatchHandler @ 0257b884 */
    FUN_02132f7c(PTR_DAT_04cc1900);
    FUN_02132f7c(PTR_DAT_04cc18f8);
    FUN_02132f7c(PTR_DAT_04cc1bc8);
                    /* try { // try from 0257b614 to 0267b623 has its CatchHandler @ 0257b874 */
    FUN_02132f7c(PTR_DAT_04cc1bd0);
    bRam0000000004f9cf3a = 1;
  }
  uVar1 = Dino_Tracking_CustomParameterValue__ValidateKey_2476d80(param_2);
  if (((uVar1 & 1) != 0) && (*param_3 != '\0')) {
                    /* try { // try from 0257b638 to 0267b643 has its CatchHandler @ 0257b830 */
    plVar3 = (long *)(param_1 + 0x10);
    lVar2 = *plVar3;
    if (lVar2 == 0) {
                    /* try { // try from 0257b644 to 0267b64b has its CatchHandler @ 0257b828 */
      lVar2 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cc18f8);
      System_Collections_Generic_List_KeyValuePair_object__DinoTrackingParameter_____ctor_396cc18
                (lVar2,*(undefined8 *)PTR_DAT_04cc1900);
                    /* try { // try from 0257b664 to 0267b66b has its CatchHandler @ 0257b82c */
      *plVar3 = lVar2;
      thunk_FUN_02134474(plVar3,lVar2);
      lVar2 = *plVar3;
    }
                    /* try { // try from 0257b67c to 0267b683 has its CatchHandler @ 0257b820 */
    System_Nullable_DinoTrackingParameter___get_Value_2bca790
              (&uStack_60,param_3,*(undefined8 *)PTR_DAT_04cc1bd0);
    uStack_88 = uStack_58;
    uStack_90 = uStack_60;
    uStack_78 = uStack_48;
    uStack_80 = uStack_50;
    uStack_68 = uStack_38;
    uStack_70 = uStack_40;
    Dino_Tracking_CustomParameterList__Set_2476938(lVar2,param_2,&uStack_90);
  }
  return param_1;
}

