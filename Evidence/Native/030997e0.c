/* IL2CPP: Dino.Tracking.TrackingEventAdBase<object>$$SetAdUnitId
Il2CppObject* Dino_Tracking_TrackingEventAdBase_object___SetAdUnitId (Dino_Tracking_TrackingEventAdBase_TSelf__o* __this, System_String_o* value, const MethodInfo_2F997E0* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingEventAdBase<object>$$SetAdUnitId
   Il2CppObject* Dino_Tracking_TrackingEventAdBase_object___SetAdUnitId
   (Dino_Tracking_TrackingEventAdBase_TSelf__o* __this, System_String_o* value, const
   MethodInfo_2F997E0* method); */

void Dino_Tracking_TrackingEventAdBase_object___SetAdUnitId_2f997e0
               (long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  *(undefined8 *)(param_1 + 0x38) = param_2;
  thunk_FUN_02134474();
  lVar2 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0216b470(lVar2);
  }
  lVar1 = thunk_FUN_0216e7a0(param_1,lVar2);
  if (lVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021335a4(param_1,lVar2);
}

