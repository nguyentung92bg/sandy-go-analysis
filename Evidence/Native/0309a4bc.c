/* IL2CPP: Dino.Tracking.TrackingEventLevelBase<object>$$SetLoopBy
Il2CppObject* Dino_Tracking_TrackingEventLevelBase_object___SetLoopBy (Dino_Tracking_TrackingEventLevelBase_TSelf__o* __this, System_Nullable_int__o value, const MethodInfo_2F9A4BC* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingEventLevelBase<object>$$SetLoopBy
   Il2CppObject* Dino_Tracking_TrackingEventLevelBase_object___SetLoopBy
   (Dino_Tracking_TrackingEventLevelBase_TSelf__o* __this, System_Nullable_int__o value, const
   MethodInfo_2F9A4BC* method); */

void Dino_Tracking_TrackingEventLevelBase_object___SetLoopBy_2f9a4bc
               (long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  *(undefined8 *)(param_1 + 0x1c) = param_2;
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

