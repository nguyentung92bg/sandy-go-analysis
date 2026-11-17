/* IL2CPP: Dino.BusSand.Cheat.QaJourney$$Act
System_String_o* Dino_BusSand_Cheat_QaJourney__Act (Dino_BusSand_App_UI_UIPanel_o* p, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.QaJourney$$Act
   System_String_o* Dino_BusSand_Cheat_QaJourney__Act (Dino_BusSand_App_UI_UIPanel_o* p, const
   MethodInfo* method); */

undefined8 Dino_BusSand_Cheat_QaJourney__Act_23704c4(long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long *plVar6;
  char *pcVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  byte bVar14;
  long lVar15;
  float fVar16;
  float fStack_44;
  
  if ((bRam0000000004f9c7d0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbb000);
    FUN_02132f7c(PTR_DAT_04cbb008);
    FUN_02132f7c(PTR_DAT_04cbb010);
    FUN_02132f7c(PTR_DAT_04cabdc0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbafc8);
    FUN_02132f7c(PTR_DAT_04cb96b0);
    FUN_02132f7c(PTR_DAT_04cbb018);
    FUN_02132f7c(PTR_DAT_04cb96b8);
    FUN_02132f7c(PTR_DAT_04cbb020);
    FUN_02132f7c(PTR_DAT_04caf288);
    FUN_02132f7c(PTR_DAT_04cabcf0);
    FUN_02132f7c(PTR_DAT_04cafb30);
    FUN_02132f7c(PTR_DAT_04cabc30);
    FUN_02132f7c(PTR_DAT_04cabd68);
    bRam0000000004f9c7d0 = 1;
  }
  puVar2 = PTR_DAT_04ca9ac8;
  fStack_44 = 0.0;
  if (param_1 == (long *)0x0) goto LAB_024709d4;
  lVar9 = *param_1;
  bVar14 = *(byte *)(lVar9 + 0x130);
  bVar1 = *(byte *)(*(long *)PTR_DAT_04cabdc0 + 0x130);
  if ((bVar14 < bVar1) ||
     (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_04cabdc0)) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_04cb96b8 + 0x130);
    if ((bVar1 <= bVar14) &&
       (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_04cb96b8)) {
      uVar8 = *(undefined8 *)PTR_DAT_04cbb018;
      if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      plVar6 = (long *)System_Type__GetTypeFromHandle_483f0b4(uVar8,0);
      if (plVar6 == (long *)0x0) goto LAB_024709d4;
      plVar6 = (long *)(**(code **)(*plVar6 + 0x6d8))
                                 (plVar6,*(undefined8 *)PTR_DAT_04cbb020,0x24,
                                  *(undefined8 *)(*plVar6 + 0x6e0));
      uVar4 = UnityEngine_Object__GetInstanceID_43c6db4(param_1,0);
      uVar5 = System_Reflection_FieldInfo__op_Inequality_4773304(plVar6,0,0);
      if ((uVar5 & 1) != 0) {
        if ((plVar6 == (long *)0x0) ||
           (plVar6 = (long *)(**(code **)(*plVar6 + 0x2e8))
                                       (plVar6,param_1,*(undefined8 *)(*plVar6 + 0x2f0)),
           plVar6 == (long *)0x0)) goto LAB_024709d4;
        if (*(long *)(*plVar6 + 0x40) != *(long *)(*(long *)(puVar2 + 0x28) + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_021335a4();
        }
        pcVar7 = (char *)thunk_FUN_0216e9e4();
        puVar2 = PTR_DAT_04cbafc8;
        if (*pcVar7 != '\0') {
          lVar9 = *(long *)PTR_DAT_04cbafc8;
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar9 = *(long *)puVar2;
          }
          lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x18);
          if (lVar9 != 0) {
            System_Collections_Generic_Dictionary_int__float___Remove_343f698
                      (lVar9,uVar4,*(undefined8 *)PTR_DAT_04cbb000);
            return 0;
          }
          goto LAB_024709d4;
        }
      }
      puVar2 = PTR_DAT_04cbafc8;
      lVar9 = *(long *)PTR_DAT_04cbafc8;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar9 = *(long *)puVar2;
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x18);
      if (lVar9 == 0) goto LAB_024709d4;
      uVar5 = System_Collections_Generic_Dictionary_int__float___TryGetValue_343fc30
                        (lVar9,uVar4,&fStack_44,*(undefined8 *)PTR_DAT_04cbb008);
      if ((uVar5 & 1) == 0) {
        lVar9 = *(long *)puVar2;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar9 = *(long *)puVar2;
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x18);
        fStack_44 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
                    /* catch() { ... } // from try @ 02470080 with catch @ 0247095c */
        if (lVar9 == 0) goto LAB_024709d4;
                    /* catch() { ... } // from try @ 0246ffb8 with catch @ 02470960 */
                    /* catch() { ... } // from try @ 0246ffb4 with catch @ 02470964 */
                    /* catch() { ... } // from try @ 0246ff90 with catch @ 02470968
                       catch() { ... } // from try @ 0246ffb0 with catch @ 02470968 */
                    /* catch() { ... } // from try @ 02470088 with catch @ 0247096c */
                    /* catch() { ... } // from try @ 02470084 with catch @ 02470970 */
                    /* catch() { ... } // from try @ 0246ffe8 with catch @ 02470974 */
        System_Collections_Generic_Dictionary_int__float___set_Item_343e2a4
                  (lVar9,uVar4,*(undefined8 *)PTR_DAT_04cbb010);
      }
                    /* catch() { ... } // from try @ 0246ffcc with catch @ 02470978 */
                    /* catch() { ... } // from try @ 0246ff98 with catch @ 0247097c */
      fVar16 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
                    /* catch() { ... } // from try @ 0246ff94 with catch @ 02470980 */
      if (fVar16 - fStack_44 < 2.5) {
        return 0;
      }
      lVar9 = *param_1;
      bVar14 = *(byte *)(lVar9 + 0x130);
    }
    puVar2 = PTR_DAT_04ca9ae8;
    bVar1 = *(byte *)(*(long *)PTR_DAT_04cb96b0 + 0x130);
    if ((bVar1 <= bVar14) &&
       (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_04cb96b0)) {
      (**(code **)(lVar9 + 0x1a8))(param_1,*(undefined8 *)(lVar9 + 0x1b0));
      puVar13 = (undefined8 *)PTR_DAT_04cabd68;
      goto LAB_024708d4;
    }
    lVar9 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)PTR_DAT_04caf288,0);
    lVar10 = *(long *)puVar2;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar10);
    }
    uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
    if ((uVar5 & 1) != 0) {
      if ((lVar9 == 0) ||
         (lVar10 = UnityEngine_Component__get_gameObject_43bcde8(lVar9,0), lVar10 == 0))
      goto LAB_024709d4;
      uVar5 = UnityEngine_GameObject__get_activeInHierarchy_43c1580(lVar10,0);
      if ((uVar5 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_04cbafc8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_Cheat_QaJourney__Click_23709e0(lVar9);
        puVar13 = (undefined8 *)PTR_DAT_04cabc30;
        goto LAB_024708d4;
      }
    }
    puVar3 = PTR_DAT_04cbafc8;
    lVar9 = *(long *)PTR_DAT_04cbafc8;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar9 = *(long *)puVar3;
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
    if (lVar9 == 0) {
LAB_024709d4:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
      uVar5 = 0;
      uVar11 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
      do {
        if (uVar11 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        lVar15 = *(long *)(lVar9 + 0x20 + uVar5 * 8);
        lVar10 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,lVar15,0);
        lVar12 = *(long *)puVar2;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar12);
        }
        uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar10,0,0);
        if ((uVar11 & 1) != 0) {
          if ((lVar10 == 0) ||
             (lVar12 = UnityEngine_Component__get_gameObject_43bcde8(lVar10,0), lVar12 == 0))
          goto LAB_024709d4;
          uVar11 = UnityEngine_GameObject__get_activeInHierarchy_43c1580(lVar12,0);
          if ((uVar11 & 1) != 0) {
                    /* try { // try from 024709ac to 025709af has its CatchHandler @ 024709e0 */
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    /* try { // try from 024709b0 to 025709cb has its CatchHandler @ 0246fa7c */
              thunk_FUN_0218fdac();
            }
            Dino_BusSand_Cheat_QaJourney__Click_23709e0(lVar10);
            if (lVar15 != 0) {
                    /* try { // try from 024709cc to 025709db has its CatchHandler @ 024709e0 */
              uVar8 = System_String__Substring_46d6a94(lVar15,4,0);
              return uVar8;
            }
            goto LAB_024709d4;
          }
        }
        uVar11 = (ulong)*(uint *)(lVar9 + 0x18);
        uVar5 = uVar5 + 1;
      } while ((long)uVar5 < (long)(int)*(uint *)(lVar9 + 0x18));
    }
    (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
    puVar13 = (undefined8 *)PTR_DAT_04cabcf0;
  }
  else {
    Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
    puVar13 = (undefined8 *)PTR_DAT_04cafb30;
  }
LAB_024708d4:
  return *puVar13;
}

