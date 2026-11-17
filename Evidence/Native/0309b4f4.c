/* IL2CPP: Dino.Tracking.TrackingEventResourceBase<object>$$SetResourceBalance
Il2CppObject* Dino_Tracking_TrackingEventResourceBase_object___SetResourceBalance (Dino_Tracking_TrackingEventResourceBase_TSelf__o* __this, System_Nullable_long__o value, const MethodInfo_2F9B4F4* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingEventResourceBase<object>$$SetResourceBalance
   Il2CppObject* Dino_Tracking_TrackingEventResourceBase_object___SetResourceBalance
   (Dino_Tracking_TrackingEventResourceBase_TSelf__o* __this, System_Nullable_long__o value, const
   MethodInfo_2F9B4F4* method); */

void Dino_Tracking_TrackingEventResourceBase_object___SetResourceBalance_2f9b4f4
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  *(undefined8 *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x38) = param_3;
  lVar2 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 8);
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

