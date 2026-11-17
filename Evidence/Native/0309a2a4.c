/* IL2CPP: Dino.Tracking.TrackingEventIapBase<object>$$SetTriggerType
Il2CppObject* Dino_Tracking_TrackingEventIapBase_object___SetTriggerType (Dino_Tracking_TrackingEventIapBase_TSelf__o* __this, System_Nullable_EIapTriggerType__o value, const MethodInfo_2F9A2A4* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingEventIapBase<object>$$SetTriggerType
   Il2CppObject* Dino_Tracking_TrackingEventIapBase_object___SetTriggerType
   (Dino_Tracking_TrackingEventIapBase_TSelf__o* __this, System_Nullable_EIapTriggerType__o value,
   const MethodInfo_2F9A2A4* method); */

void Dino_Tracking_TrackingEventIapBase_object___SetTriggerType_2f9a2a4
               (long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  *(undefined8 *)(param_1 + 0x28) = param_2;
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

