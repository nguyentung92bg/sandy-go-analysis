/* IL2CPP: Dino.Tracking.ServerTrackingAutoRouter$$get_UseServerPreference
bool Dino_Tracking_ServerTrackingAutoRouter__get_UseServerPreference (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.ServerTrackingAutoRouter$$get_UseServerPreference
   bool Dino_Tracking_ServerTrackingAutoRouter__get_UseServerPreference (const MethodInfo* method);
    */

undefined1 Dino_Tracking_ServerTrackingAutoRouter__get_UseServerPreference_2460504(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_24 [4];
  
  puVar2 = PTR_DAT_04cc09b8;
  puVar1 = PTR_DAT_04cc09b0;
  if ((bRam0000000004f9ce1e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc09b8);
    FUN_02132f7c(PTR_DAT_04cc09b0);
    bRam0000000004f9ce1e = 1;
  }
  uVar3 = *(undefined8 *)puVar1;
  lVar4 = *(long *)puVar2;
  lVar5 = *(long *)(lVar4 + 0x38);
  if (lVar5 == 0) {
    FUN_0216b4cc(lVar4);
    lVar5 = *(long *)(lVar4 + 0x38);
  }
  auStack_24[0] = 0;
  Dino_Common_SaveLoadLocalDevice__TryLoad_bool__28aad30
            (uVar3,0,auStack_24,*(undefined8 *)(lVar5 + 8));
  return auStack_24[0];
}

