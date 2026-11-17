/* IL2CPP: Dino.BusSand.App.Meta.TrackingPlan.<get_AllEventNames>d__27$$System.IDisposable.Dispose
void Dino_BusSand_App_Meta_TrackingPlan__get_AllEventNames_d__27__System_IDisposable_Dispose (Dino_BusSand_App_Meta_TrackingPlan__get_AllEventNames_d__27_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.TrackingPlan.<get_AllEventNames>d__27$$System.IDisposable.Dispose
   void Dino_BusSand_App_Meta_TrackingPlan__get_AllEventNames_d__27__System_IDisposable_Dispose
   (Dino_BusSand_App_Meta_TrackingPlan__get_AllEventNames_d__27_o* __this, const MethodInfo*
   method); */

undefined1  [16]
Dino_BusSand_App_Meta_TrackingPlan__get_AllEventNames_d__27__System_IDisposable_Dispose_2292240
          (long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  puVar2 = PTR_DAT_04cb53d8;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 < 1) {
    if (iVar1 == -4) {
Dino_BusSand_App_Meta_TrackingPlan__get_AllEventNames_d__27____m__Finally2_22925b0:
      if ((bRam0000000004f9c1db & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cb53d8);
        bRam0000000004f9c1db = 1;
      }
      uVar3 = *(undefined8 *)puVar2;
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      goto 
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose_3646180
      ;
    }
    if (iVar1 != -3) {
LAB_0239225c:
      auVar4._8_8_ = param_2;
      auVar4._0_8_ = param_1;
      return auVar4;
    }
  }
  else {
    if (iVar1 == 2)
    goto Dino_BusSand_App_Meta_TrackingPlan__get_AllEventNames_d__27____m__Finally2_22925b0;
    if (iVar1 != 1) goto LAB_0239225c;
  }
  if ((bRam0000000004f9c1da & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb53d8);
    bRam0000000004f9c1da = 1;
  }
  uVar3 = *(undefined8 *)puVar2;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose_3646180:
  auVar5._0_8_ = param_1 + 0x28;
  auVar5._8_8_ = uVar3;
  return auVar5;
}

