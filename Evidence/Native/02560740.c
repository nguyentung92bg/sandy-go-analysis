/* IL2CPP: Dino.Tracking.ServerTrackingProvider$$.ctor
void Dino_Tracking_ServerTrackingProvider___ctor (Dino_Tracking_ServerTrackingProvider_o* __this, Dino_Common_IUserIdProvider_o* userIdProvider, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.ServerTrackingProvider$$.ctor
   void Dino_Tracking_ServerTrackingProvider___ctor (Dino_Tracking_ServerTrackingProvider_o* __this,
   Dino_Common_IUserIdProvider_o* userIdProvider, const MethodInfo* method); */

void Dino_Tracking_ServerTrackingProvider___ctor_2460740(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  puVar5 = PTR_DAT_04cc09d8;
  puVar4 = PTR_DAT_04cbf450;
  puVar3 = PTR_DAT_04cbf3c0;
  puVar2 = PTR_DAT_04cab2a8;
  if ((bRam0000000004f9ce37 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa210);
    FUN_02132f7c(PTR_DAT_04caafe8);
    FUN_02132f7c(PTR_DAT_04cbf450);
    FUN_02132f7c(PTR_DAT_04cbf3c0);
    FUN_02132f7c(PTR_DAT_04cbf988);
    FUN_02132f7c(PTR_DAT_04cc09e0);
    FUN_02132f7c(PTR_DAT_04cab2a8);
    FUN_02132f7c(PTR_DAT_04cc09d8);
    bRam0000000004f9ce37 = 1;
  }
  puVar1 = PTR_DAT_04caa210;
  uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_List_DinoTrackingParameter____ctor_3a1410c
            (uVar6,0x10,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x30) = uVar6;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x30),uVar6);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)puVar2;
  thunk_FUN_02134474();
  System_Object___ctor_4870e5c(param_1,0);
  *(long *)(param_1 + 0x10) = (long)param_2;
  thunk_FUN_02134474((long *)(param_1 + 0x10),param_2);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)puVar5;
  thunk_FUN_02134474();
  if (cRam0000000004f9ce45 == '\0') {
    FUN_02132f7c(PTR_DAT_04cc09d0);
    cRam0000000004f9ce45 = '\x01';
  }
  puVar3 = PTR_DAT_04cc09d0;
  **(long **)(*(long *)PTR_DAT_04cc09d0 + 0xb8) = param_1;
  puVar2 = PTR_DAT_04cbf988;
  thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar3 + 0xb8),param_1);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uStack_58 = UnityEngine_Application__get_platform_4352d00(0);
  uStack_68 = *(undefined8 *)puVar2;
  uStack_60 = 0xffffffffffffffff;
  uVar6 = System_Enum__ToString_4863070(&uStack_68,0);
  uVar7 = UnityEngine_Application__get_version_435257c(0);
  if (param_2 != (long *)0x0) {
    lVar11 = *param_2;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_04caafe8) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_02560984;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_0216b7a4(param_2,*(long *)PTR_DAT_04caafe8,0);
LAB_02560984:
    lVar11 = (*(code *)*puVar8)(param_2,puVar8[1]);
    if (lVar11 != 0) goto LAB_025609ac;
  }
  lVar11 = **(long **)(*(long *)(PTR_DAT_04ca9ac8 + 0x90) + 0xb8);
LAB_025609ac:
  puVar2 = PTR_DAT_04cc09e0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Application__get_identifier_43526b4(0);
  uVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  Dino_Tracking_ServerTrackingCore___ctor_2460ba8(0x40a00000,uVar10,0x32,uVar6,uVar7,lVar11,uVar9,0)
  ;
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x20) = uVar10;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x20),uVar10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

