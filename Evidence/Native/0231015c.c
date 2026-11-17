/* IL2CPP: Dino.BusSand.App.Meta.Feedback$$Json
System_String_o* Dino_BusSand_App_Meta_Feedback__Json (System_String_o* text, int32_t stars, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Feedback$$Json
   System_String_o* Dino_BusSand_App_Meta_Feedback__Json (System_String_o* text, int32_t stars,
   const MethodInfo* method); */

void Dino_BusSand_App_Meta_Feedback__Json_221015c(undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined4 uStack_64;
  
  puVar3 = PTR_DAT_04caa210;
  puVar2 = PTR_DAT_04ca9b50;
  puVar1 = PTR_DAT_04ca9b08;
  if ((bRam0000000004f9bd3b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa210);
    FUN_02132f7c(PTR_DAT_04caab38);
    FUN_02132f7c(PTR_DAT_04ca9b50);
    FUN_02132f7c(PTR_DAT_04ca9b08);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cb22a0);
    FUN_02132f7c(PTR_DAT_04cb22a8);
    FUN_02132f7c(PTR_DAT_04cb22b0);
    FUN_02132f7c(PTR_DAT_04cb22b8);
    FUN_02132f7c(PTR_DAT_04cb22c0);
    FUN_02132f7c(PTR_DAT_04cb22c8);
    FUN_02132f7c(PTR_DAT_04cb22d0);
    bRam0000000004f9bd3b = 1;
  }
  lVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Collections_Generic_Dictionary_object__object____ctor_34b3628(lVar9,*(undefined8 *)puVar2);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar10 = UnityEngine_Application__get_productName_43527ec(0);
  puVar8 = PTR_DAT_04cb22d0;
  puVar7 = PTR_DAT_04cb22c8;
  puVar6 = PTR_DAT_04cb22b8;
  puVar5 = PTR_DAT_04cb22b0;
  puVar4 = PTR_DAT_04cb22a8;
  puVar3 = PTR_DAT_04cb22a0;
  puVar2 = PTR_DAT_04cabaf8;
  puVar1 = PTR_DAT_04caab38;
  if (lVar9 != 0) {
    System_Collections_Generic_Dictionary_object__object___Add_34b43a4
              (lVar9,*(undefined8 *)PTR_DAT_04cb22c0,uVar10,*(undefined8 *)PTR_DAT_04caab38);
    System_Collections_Generic_Dictionary_object__object___Add_34b43a4
              (lVar9,*(undefined8 *)puVar8,param_1,*(undefined8 *)puVar1);
    uStack_64 = param_2;
    uVar10 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_64);
    System_Collections_Generic_Dictionary_object__object___Add_34b43a4
              (lVar9,*(undefined8 *)puVar3,uVar10,*(undefined8 *)puVar1);
    uVar10 = UnityEngine_SystemInfo__get_deviceModel_43cc320(0);
    System_Collections_Generic_Dictionary_object__object___Add_34b43a4
              (lVar9,*(undefined8 *)puVar7,uVar10,*(undefined8 *)puVar1);
    uVar10 = UnityEngine_SystemInfo__get_operatingSystem_43cc058(0);
    System_Collections_Generic_Dictionary_object__object___Add_34b43a4
              (lVar9,*(undefined8 *)puVar4,uVar10,*(undefined8 *)puVar1);
    uVar10 = UnityEngine_Application__get_version_435257c(0);
    System_Collections_Generic_Dictionary_object__object___Add_34b43a4
              (lVar9,*(undefined8 *)puVar6,uVar10,*(undefined8 *)puVar1);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar10 = Dino_BusSand_App_Meta_Profile__get_PlayerId_2274008(0);
    System_Collections_Generic_Dictionary_object__object___Add_34b43a4
              (lVar9,*(undefined8 *)puVar5,uVar10,*(undefined8 *)puVar1);
    Dino_BusSand_App_MiniJson__Serialize_21556ec(lVar9,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

