/* IL2CPP: Dino.Tracking.TrackingService$$FlushBuffer
void Dino_Tracking_TrackingService__FlushBuffer (Dino_Tracking_TrackingService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingService$$FlushBuffer
   void Dino_Tracking_TrackingService__FlushBuffer (Dino_Tracking_TrackingService_o* __this, const
   MethodInfo* method); */

void Dino_Tracking_TrackingService__FlushBuffer_24801b8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((bRam0000000004f9cf99 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4998);
    FUN_02132f7c(PTR_DAT_04caa2f0);
    FUN_02132f7c(PTR_DAT_04caa2f8);
    FUN_02132f7c(PTR_DAT_04caa300);
    FUN_02132f7c(PTR_DAT_04caa308);
    FUN_02132f7c(PTR_DAT_04caa310);
    FUN_02132f7c(PTR_DAT_04caa318);
    FUN_02132f7c(PTR_DAT_04cc2218);
    FUN_02132f7c(PTR_DAT_04cc2228);
    bRam0000000004f9cf99 = 1;
  }
  puVar3 = PTR_DAT_04cb4998;
  puVar2 = PTR_DAT_04caa300;
  puVar1 = PTR_DAT_04caa2f8;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  if (*(long *)(param_1 + 0x40) != 0) {
    System_Collections_Generic_Dictionary_object__object___GetEnumerator_34b47d8
              (&uStack_60,*(long *)(param_1 + 0x40),*(undefined8 *)PTR_DAT_04caa2f0);
    while (uVar4 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext_3645d38
                             (&uStack_60,*(undefined8 *)puVar2), (uVar4 & 1) != 0) {
      Dino_Tracking_TrackingService__ForwardProperty_247fd2c(param_1,uStack_50,uStack_48);
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose_3645e58
              (&uStack_60,*(undefined8 *)puVar1);
    if (*(long *)(param_1 + 0x40) != 0) {
      System_Collections_Generic_Dictionary_object__object___Clear_34b452c
                (*(long *)(param_1 + 0x40),*(undefined8 *)puVar3);
      puVar1 = PTR_DAT_04cc2218;
      lVar5 = *(long *)(param_1 + 0x38);
      while (lVar5 != 0) {
        if (*(int *)(lVar5 + 0x20) < 1) {
          return;
        }
        auVar6 = System_Collections_Generic_Queue_TrackingService_PendingEvent___Dequeue_2ce72c0
                           (lVar5,*(undefined8 *)puVar1);
        Dino_Tracking_TrackingService__ForwardEvent_247f9a0(param_1,auVar6._0_8_,auVar6._8_8_);
        lVar5 = *(long *)(param_1 + 0x38);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

